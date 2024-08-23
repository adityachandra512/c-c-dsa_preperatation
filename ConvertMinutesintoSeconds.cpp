#include<iostream>
using namespace std;
int convert(int count);
int main(){
    int count;
    cout<<"Enter the minutes: ";
    cin>>count;
    cout<<"Seconds: "<<convert(count);
    return 0;
}
int convert(int count){
    return count*60;
}
