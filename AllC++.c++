#include<bits/stdc++.h>
using namespace std;
int main (){
    cout<<"Hello world";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=2;
    float b=2.3;
    double c= 4;
    double d= 4.3;
    char e='s';
    string name = "Arpit";
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<name;
}



#include<bits/stdc++.h>
using namespace std;
int main(){
   int a;
   cin>>a;
   if(a%2==0){
      cout<<"It is  a even number";
   }else{
      cout<<"It is a odd number ";
   }
}



#include<bits/stdc++.h>
using namespace std;
int main(){
   int a[]= {2,3,4,5,6};
   int b[5];
   cin>>b[0];
   cout<<"the value of b at index 0 is :"<<b[0]<<endl;
   cout<<a[2];
}


#include<bits/stdc++.h>
using namespace std;
int main(){
   for (int i=0;i<5;i++)
   {
      for(int j=0;j<=i;j++){
         cout<<"*";
      }
      cout<<endl;
   }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
   string name = "Arpit";
   int arr[]={5,7,8,9,7,8};
   int arrlen =sizeof(arr)/sizeof(arr[0]);
   int len = name.size();
   cout<<len<<endl;
   cout<<arrlen;
}


#include<bits/stdc++.h>
using namespace std;
void ppname(string nameval){
    cout<<nameval;
}
int main(){
    string name = "Arpit";
    ppname(name);
}


#include<bits/stdc++.h>
using namespace std;
int sumoftwo(int a ,int b){
    return(a+b);
}
int main()
{
    int a=5;
    int b=6;
    cout<<sumoftwo(a,b);
}


#include<bits/stdc++.h>
using namespace std;
void valueref (int &a){
    cout<<a<<endl;
    a=a+5;
}
int main()
{
    int a=5;
    valueref(a);
    cout<<a;
}