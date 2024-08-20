#include<iostream>
using namespace std;
int main(){
int n,sq,sum=0;
cout<<"enter a number";
cin>>n;
sq=n*n;
while(sq>0){
    sum=sum+ sq % 10;
    sq=sq/10;
}
if(sum==n){
    cout<<"it is a neon number"<<endl;
}
else{
    cout<<"it is not a neon number"<<endl;
}
return 0;
}