class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        if (m == 0) return 0;
        if (n == 0) return 0;
        int res = 0;
        for (int i = 0; i < n; i++) {
            vector<int> sums(m, 0);
            for (int j = i; j < n; j++) {
                for (int k = 0; k < m; k++) {
                    sums[k] += matrix[k][j];
                }
                unordered_map<int, int> hash;
                hash[0]++;
                int curSum = 0;
                for (int k = 0; k < m; k++) {
                    curSum += sums[k];
                    if (hash.count(curSum - target)) {
                        res += hash[curSum - target];
                    }
                    hash[curSum]++;
                }
            }
        }
        return res;
    }
};