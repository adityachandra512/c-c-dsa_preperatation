#include<iostream>
using namespace std;
int main(){
int x,y;
cout<<"enter the value of x:";
cin>>x;
cout<<"enter the value of y:";
cin>>y;
cout<<"value before swapping "<<x<<" "<<y<<endl;
//the swapping method
x=x+y;
y=x-y;
x=x-y;
cout<<"the value after swapping "<<x<<" "<<y<<endl;
return 0;
}