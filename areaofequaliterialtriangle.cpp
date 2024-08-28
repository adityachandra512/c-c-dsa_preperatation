#include<iostream>
#include<cmath>
using namespace std;
int main(){
int s;
float area;
cout<<"Enter the side of the equilateral triangle: ";
cin>>s;
area=float((sqrt(3)/4)*s*s);
cout<<"The area of the equilateral triangle is: "<<area<<endl;
return 0;
}