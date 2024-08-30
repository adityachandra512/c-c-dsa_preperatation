#include<iostream>
using namespace std;
int main(){
int a[20],N,temp,i,j;
cout<<"enter the number of element ";
cin>>N;
cout<<"enter the element of the array";
for(i=0;i<N;i++){
    cin>>a[i];
}
for(i=1;i<N;i++){
    temp=a[i];
    j=i-1;
    while (temp<a[j]&&j>=0)
    {
        a[j+1]=a[j];
        j=j-1;
    }
    a[j+1]=temp;
}
cout<<"the sorted list";
for(i=0;i<N;i++){
    cout<<a[i]<<" ";
}
return 0;
}