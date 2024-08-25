#include<iostream>
#include<cmath>
using namespace std;
int main(){
int num, temp, sum = 0, digit_count=0,pd;
cout<<"Enter the number: ";
cin>>num;
temp=num;
while(temp!=0){
    temp=temp/10;
    digit_count++;
}
temp=num;
while(temp!=0){
        sum=sum+pow((temp%10),digit_count--);
        temp=temp/10;
}
if(sum==num){
    cout<<num<<" is a disarium number."<<endl;
}
else{
    cout<<num<<" is not a disarium number."<<endl;
}
return 0;
}