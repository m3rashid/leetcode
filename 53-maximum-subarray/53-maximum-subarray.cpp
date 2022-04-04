class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        
        int maxSoFar = INT_MIN;
        int maxEndHere = 0;
        
        for(int i=0; i<n; i++){
            maxEndHere = maxEndHere + nums[i];
            if(maxSoFar < maxEndHere) maxSoFar = maxEndHere;
            if(maxEndHere < 0) maxEndHere = 0;
            
        }
        return maxSoFar;
    }
};