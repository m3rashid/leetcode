class Solution {
private :
  double calcAnswer (vector<int>&v) {
     double answer;
    if (v.size() % 2 == 0) {
        answer = (v[v.size() / 2] * 1.0 + v[(v.size() - 1) / 2] * 1.0) / 2;
    } else {
        answer = v[v.size() / 2] * 1.0;
    }
    
    return answer; 
  }  
  
public:
  double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    if(nums1.size() == 0 && nums2.size() == 0) {
      return 0.0;
    }
    else if (nums1.size() == 0){
      return calcAnswer(nums2);
    }
    else if(nums2.size() == 0){
      return calcAnswer(nums1);
    }
    
//     merge both the arrays
    int i=0, j=0;
    vector<int> v;
    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] <= nums2[j]) {
            v.push_back(nums1[i]);
            i++;
        } else {
            v.push_back(nums2[j]);
            j++;
        }
    }

    
    for(;i<nums1.size(); i++){
      v.push_back(nums1[i]);
    }
    for(;j<nums2.size(); j++){
      v.push_back(nums2[j]);
    }
    
//     find the middle element
      return calcAnswer(v);
  }
};