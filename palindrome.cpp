#include<iostream>
using namespace std;
int main(){
string input;
cout<<"enter a string ";
cin>>input;
int start=0;
int end=input.length()-1;
bool ispalindrom=true;
while(start<end){
    if(input[start]!=input[end]){
        ispalindrom=false;
        break;
    }
    start++;
    end--;
}
if(ispalindrom){
    cout<<"the string is a palindrom"<<endl;
}
else{
    cout<<"the string is not palindrom"<<endl;
}
return 0;
}