#include<iostream>
using namespace std;
int main(){
int n,num,x,sum=0;
cout<<"Enter the number: ";
cin>>n;
while(n>0){
    num=n%10;
    sum=sum+num;
    n=n/10;
}
cout<<"sum of the digits is "<<sum<<endl;
return 0;
}