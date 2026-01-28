class Solution {
public:
    bool isPalindrome(int x) {
       int y=x;
        long long num=0;
        if(x<0)return false;
        while(y>0){
        num=num*10+y%10;
        y=y/10;
        }
        return num==x;
    }
};