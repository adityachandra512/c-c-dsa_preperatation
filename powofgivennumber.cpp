#include<iostream>
using namespace std;
int main(){
int pow,num,i=1;
long int sum=1;
cout<<"Enter the number: ";
cin>>num;
cout<<"Enter the power: ";
cin>>pow;
while(i<=pow){
    sum=sum*num;
    i++;
}
cout<<"The power of the given number is: "<<sum<<endl;
return 0;
}