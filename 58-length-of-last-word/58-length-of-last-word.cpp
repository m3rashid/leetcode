class Solution {
public:
    int lengthOfLastWord(string s) {
         int len = 0;
    auto it = s.rbegin();

    bool spaceFound = false;
    for (; it != s.rend(); it++) {
        if (*it != ' ') break;
    }
    for (; it != s.rend(); it++) {
        if (*it != ' ') len++;
        else break;
    }

    return len;
    }
};