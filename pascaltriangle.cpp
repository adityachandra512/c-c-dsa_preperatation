#include<iostream>
long fact(int);
long fact(int num){
    long f=1;
    int i=1;
    while(i<=num){
        f=f*i;
        i++;
    }
    return f;
}
using namespace std;
int main(){
    int line,i,j;
    cout<<"enter number of lines";
    cin>>line;
    for(i=0;i<line;i++){
        for(j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }

return 0;
}