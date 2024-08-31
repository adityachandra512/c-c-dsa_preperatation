#include<iostream>
using namespace std;
int main(){
int marks;
cout<<"enter the marks";
cin>>marks;
if(marks>=85){
    cout<<"grade A";
}
else if(marks>=70){
    cout<<"grade B";
}
else if(marks>=55){
    cout<<"grade C";
}
else if(marks>=40){
    cout<<"grade D";
}
else{
    cout<<"grade F";
}
return 0;
}