#include<iostream>
using namespace std;
int main(){
long int n;
long int x,s;
cout<<"Enter the number: ";
cin>>n;
while(n>=10){
    x=n;
    s=0;
    while(x>0){
        s=s+(x%10);
        x=x/10;
    }
    n=s;
}
cout<<"The super digit of the given number is: "<<n<<endl;
return 0;
}