// Q:-https://leetcode.com/problems/palindrome-number/
class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0;
        int num;
        int dup=x;
        while(x!=0){
            num=x%10;
            if(rev<=INT_MAX/10 and rev>=INT_MIN/10){
                rev=rev*10+num;
            }else{
                return false;
            }
           
            x=x/10;
        }
        if(dup==rev and dup>=0){
            return true;
        }else{
            return false;
        }
    }
};