#include<bits/stdc++.h>
using namespace std;
void printval (int n){
    if(n==0){
        return;
    }else{
        printval (n-1);
        cout<<n<<" ";
    }
}

int main (){
    int n=10;
    printval(n);
    return 0;
}