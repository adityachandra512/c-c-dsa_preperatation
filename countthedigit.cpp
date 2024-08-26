#include<iostream>
using namespace std;
int main(){
int num,count=0;
cout<<"Enter the number: ";
cin>>num;
while(num){
    num=num/10;
    count++;
}
cout<<"The number of digits in the given number is: "<<count<<endl;
return 0;
}