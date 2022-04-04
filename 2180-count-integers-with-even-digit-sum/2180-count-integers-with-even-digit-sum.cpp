class Solution {
public:
    int sum(int num){
        int s = 0;
        while(num>0){
            s += num%10;
            num = num/10;
        }
        return s;
    }
    
    int countEven(int num) {
        if(sum(num)%2 == 0) return num/2;
        else if(num%2 == 0) return (num/2)-1;
        else return num/2;
    }
};