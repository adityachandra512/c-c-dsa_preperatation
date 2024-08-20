#include<iostream>
using namespace std;
int main(){
int n,sum=0,i=1;
cout<<"enter a number ";
cin>>n;
while(i<n){
    if(n%i==0){
        sum=sum+i;
    }
    i++;
}
if(sum==n){
    cout<<"is is a perfect number"<<endl;
}
else{
    cout<<"is is not a perfect number"<<endl;
}
return 0;
}