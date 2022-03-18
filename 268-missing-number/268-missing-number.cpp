class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int max = nums.size();
        int required = max * (max + 1)/2;
        int gotSum = 0;
        for(int i=0; i<max; i++){
            gotSum += nums[i];
        }
        return (required - gotSum);
    }
};