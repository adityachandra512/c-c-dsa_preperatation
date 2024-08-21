#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter number ";
cin>>n;
int num;
long int sq;
int r;
int t;
int equal;
num=n;
sq=n*n;
t=10;
cout<<"square of the number is "<<sq<<endl;
while(n>0){
    r=sq%t;
    if(num==r){
        equal=1;
        break;
    }
    n=n/10;
    t=t*10;
}
if(equal==1){
    cout<<"it is an automorphic number"<<endl;
}
else{
    cout<<"it is not an automorphic number"<<endl;
}
return 0;
}