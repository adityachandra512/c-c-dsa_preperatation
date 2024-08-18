#include<iostream>
using namespace std;
int main(){
int x,y,temp;
cout<<"the value of the a:";
cin>>x;
cout<<"enter the vlaue of b:";
cin>>y;
cout<<"the number before swap "<<x<<" "<<y<<endl;
temp=x;
x=y;
y=temp;
cout<<"the number after swap "<<x<<" "<<y<<endl;
return 0;
}