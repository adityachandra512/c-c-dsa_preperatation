#include<iostream>
using namespace std;
int main(){
int num,temp,sum,i=1,n=0;
cout<<"enter the number";
cin>>num;
sum=0;
i=num;
while(num>0){
    n=num%10;
    num=num/10;
    sum=sum+(n*n*n);
}
if(sum==i){
    cout<<"it is an armstrong number"<<endl;
}
else{
    cout<<"it is not an armstrong number"<<endl;
}
return 0;
}