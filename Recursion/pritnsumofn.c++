#include <bits/stdc++.h>
using namespace std;
    int sumOfSeries(long long n) {
        // code here
       long long val =0;
        if(n==0){
            return 0;
        }else{
            val = (n*n*n)+sumOfSeries(n-1);
            return val;
        }
    }
    int main (){
        cout<<sumOfSeries(5);
        return 0;
    }