#include<iostream>
using namespace std;
int main(){
int i=0;
while(i!=1){
    cout<<"you are inside the while loop"<<endl;
    cout<<"press 1 to exit"<<endl;
    cin>>i;
}
cout<<"you are outside the while loop"<<endl;
return 0;
}