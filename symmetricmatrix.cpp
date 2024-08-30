#include<iostream>
using namespace std;
int main(){
int a[3][3];
int b[3][3];
int flag;
int i,j;
cout<<"enter the element in the matrix";
for(i=0;i<3;i++){
    for (j=0;j<3;j++){
        cin>>a[i][j];
    }
}
cout<<"entered matrixe"<<endl;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        b[i][j]=a[j][i];
    }
}
cout<<"transpose of the matrix"<<endl;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cout<<b[i][j]<<" ";
    }
    cout<<endl;
}
flag=1;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        if(a[i][j]!=b[i][j]){
            flag=0;
            break;
        }
    }
}
if(flag==1){
    cout<<"matrix is symmetric";
}
else{
    cout<<"matrix is not symmetric";
}
return 0;
}