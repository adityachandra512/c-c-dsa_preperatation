#include<iostream>
using namespace std;
int main(){
int num,temp,sum=0,save_num,p,i,r;
cout<<"enter the number ";
cin>>num;
save_num=num;
while(num){
    i=1,p=1;
    r=num%10;
    while(i<=r){
        p=p*i;
        i++;
    }
    sum=sum+p;
    num=num/10;
}
if(sum==save_num){
    cout<<save_num<<" is a strong number"<<endl;
}
else{
    cout<<save_num<<" is is not a strong  number"<<endl;
}
return 0;
}