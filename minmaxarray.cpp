#include<iostream>
using namespace std;
int main(){
int i,n,max=0,min,val;
cout<<"Enter the number of elements: ";
cin>>n;
cout<<"Enter the elements: ";
cin>>val;
min=val;
if(val>max){
    max=val;
}
for(i=1;i<n;i++){
    cin>>val;
    if(val>max){
        max=val;
    }
    if(val<min){
        min=val;
    }
}
cout<<"The maximum element is: "<<max<<endl;
cout<<"The minimum element is: "<<min<<endl;
return 0;
}