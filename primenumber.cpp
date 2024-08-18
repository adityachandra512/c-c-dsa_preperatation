#include<iostream>
using namespace std;
int main(){
int n;
bool isprime=true;
cout<<"enter the number n:"<<endl;
cin>>n;
if(n<=1){
    isprime=false;
}
else{
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
}
if(isprime){
    cout<<"the number "<<n<<" is prime"<<endl;
}
else{
    cout<<n<<" is not prime number"<<endl;
}
return 0;
}