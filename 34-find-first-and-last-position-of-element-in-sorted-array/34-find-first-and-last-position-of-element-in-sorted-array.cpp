class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         int foundFirst = -1;
    int foundLast = foundFirst;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target && foundFirst == -1) {
            foundFirst = i;
            foundLast = i;
            break;
        }
    }
    if (foundFirst != -1) {
        for (int i = foundFirst + 1; i < nums.size(); i++) {
            if (nums[i] == target) {
                foundLast++;
            }
        }
    }

    vector<int> v;
    v.push_back(foundFirst);
    v.push_back(foundLast);
    return v;
    }
};