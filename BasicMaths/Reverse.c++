// Q:-https://leetcode.com/problems/reverse-integer/
class Solution {
public:
    int reverse(int x) { 
        int rev=0;
        int num;
        while(x!=0){
            num=x%10;
            if(rev<=INT_MAX/10 and rev>=INT_MIN/10 ){
            rev=rev*10+num;
            }else{
                return 0;
            }
            x=x/10;
        }
        return rev;
    }
};