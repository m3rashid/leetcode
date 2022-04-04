class Solution {
public:
  int searchInsert(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size();
    int middle;
    while(low < high){
      middle = (low + high)/2;
      if(nums[middle] == target) return middle;
      else if(nums[middle] > target) high = middle;
      else low = middle + 1; 
    }
    return high;
  }
};
