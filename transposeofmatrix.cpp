#include<iostream>
using namespace std;
int main(){
int a[3][3];
int t[3][3];
cout<<"enter the value of the matrix"<<endl;
for(int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        cin>>a[i][j];
    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        t[i][j]=a[j][i];
    }
}
cout<<"enter matrix is"<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"transpose of the matrix"<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<t[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}