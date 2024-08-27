#include<iostream>
using namespace std;
int lcm(int,int);
int lcm(int x,int y){
    int i;
    for(i=1;i<=x*y;i++){
        if(i%x==0 && i%y==0){
            return i;
        }
    }
}
int main(){
int x,y=1;
cout<<"enter numnber to find lcm(press 0 to exit): ";
while(1){
    cin>>x;
    if(x<1){
        break;
    }
    else if(x>y){
        y=lcm(x,y);
    }
    else{
        y=lcm(y,x);
    }
}
cout<<"The lcm of the given numbers is: "<<y<<endl;
return 0;
}