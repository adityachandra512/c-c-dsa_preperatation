#include<iostream>
using namespace std;
int main(){
int up;
int lw;
int n;
int i;
int sum=0,prod=1;
int d;
cout<<"Enter the lower limit: ";
cin>>lw;
cout<<"Enter the upper limit: ";
cin>>up;
cout<<"list of spy numbers between "<<lw<<" and "<<up<<":\n";
for(i=lw;i<up;i++){
    sum=0;
    prod=1;
    n=i;
    while(n>0){
        d=n%10;
        sum=sum+d;
        prod=prod*d;
        n=n/10;
    }
    if(sum==prod){
        cout<<i<<endl;
    }
}
return 0;
}