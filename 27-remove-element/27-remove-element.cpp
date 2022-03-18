class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == val){
                for(int j=i+1; j<n; j++){
                    if(nums[j] != val){
                        int temp = nums[j];
                        nums[j] = nums[i];
                        nums[i] = temp;
                        break;
                    }
                }
            }
        }
        int count = 0;
        for(int i=0; i<n; i++){
            if(nums[i] == val){
                count++;
            }
        }
        return n-count;
    }
};