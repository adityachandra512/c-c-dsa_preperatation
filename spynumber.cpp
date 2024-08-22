#include<iostream>
using namespace std;
int main(){
int n,sum=0,prod=1;
int d;
cout<<"enter the number ";
cin>>n;
while (n>0)
{
    d=n%10;
    sum=sum+d;
    prod=prod*d;
    n=n/10;
}
if(sum==prod){
    cout<<"given number is a spy number";
}else{
    cout<<"given number is a not spy number";
}
return 0;
}