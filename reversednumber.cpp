#include<iostream>
using namespace std;
int main(){
int a;
int b;
int d=0;
cout<<"enter the number:";
cin>>a;
while(a>0){
    b=a%10;
    a=a/10;
    d=(d*10)+b;
}
cout<<"reversed number is"<<d<<endl;
return 0;
}