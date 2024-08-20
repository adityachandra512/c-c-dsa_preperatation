#include<iostream>
using namespace std;
int main(){
int year;
cin>>year;
if(year%400==0){
    cout<<"leap year"<<endl;
}
else if(year%100==0){
    cout<<"it is not a leap year"<<endl;
}
else if(year%4==0){
    cout<<"it is a leap year"<<endl;
}
else{
    cout<<"is is not a leap year"<<endl;
}
return 0;
}