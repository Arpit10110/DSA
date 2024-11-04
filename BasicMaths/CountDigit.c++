// Q:-https://practice.geeksforgeeks.org/problems/count-digits5716/1
class Solution{
public:
    int evenlyDivides(int N){
        int c=0;
        int n=N;
        int val;
        while(n>0){
            val= n%10;
            if(val !=0){
                if(N%val==0){
                c++;
                }
            }
            n=n/10;
        }
        return c;
    }
};