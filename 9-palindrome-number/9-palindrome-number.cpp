class Solution {
public:
    bool isPalindrome(int x) {
        int y = x;
        if(y<0) return false;
        int digits = 0;
        vector <int> v;
        while(y!=0){
            v.push_back(y%10);
            y /= 10;
            digits++;
        }
        cout << digits;
        for(int i=0; i<digits/2; i++){
            if(v[i] != v[digits-i-1]) return false;
        }
        return true;
        
    }
};