#include<iostream>
using namespace std;
int main(){
int firstnum=0,secondnum=1,result=0;
int n=5;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<result<<" ";
        firstnum=secondnum;
        secondnum=result;
        result=firstnum+secondnum;
    }
    firstnum=0;
    secondnum=1;
    result=0;
    cout<<endl;
}
return 0;
}