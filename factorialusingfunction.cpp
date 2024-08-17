#include<iostream>
using namespace std;
int fatcorial(int n){
    int fact=1;
    for(int i=1;i<=n;++i){
        fact=fact*i;
    }
}
int main(){
    int n;
    cout<<"enter the number n:";
    cin>>n;
    cout<<"factorial of "<<n<<"is"<<fatcorial(n)<<endl;
return 0;
}