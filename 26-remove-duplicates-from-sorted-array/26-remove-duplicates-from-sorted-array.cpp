class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == 200) continue;
            for(int j=i+1; j<n; j++){
                if(nums[j] == nums[i]) nums[j] = 200;
                else break;
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 200){
                for(int j=i+1; j<nums.size(); j++){
                    if(nums[j] != 200){
                        int temp = nums[j];
                        nums[j] = nums[i];
                        nums[i] = temp;
                        break;
                    }
                }
            }   
        }
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            (nums[i] == 200) && count++;
        }
        return n-count;
    }
};