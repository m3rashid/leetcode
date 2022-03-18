class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        vector<char> res;
        
        int min = strs[0].length();
        for(int i=1; i<n; i++){
            if(strs[i].length() < min) min = strs[i].length();
        }
        
        for(int i=0; i<min; i++){
            char match = strs[0][i];
            for(int j=0; j<n; j++){
                if(strs[j][i] != match){
                    string s(res.begin(), res.end());
                    return s;
                }
            }
            res.push_back(match);
        }
        string s(res.begin(), res.end());
        return s;
    }
};
