#include<iostream>
using namespace std;
int main(){
int num;
int n,flag=0;
cout<<"Enter the number: ";
cin>>num;for(n=0;n<=num;n++){
    if(n*(n+1)==num){
        flag=1;
        break;
    }
}
if(flag==1){
    cout<<num<<" is a pronic number as it is the product of two consecutive number."<<n<<"and"<<n+1;
}
else{
    cout<<num<<" is not a pronic number."<<endl;
}
return 0;
}