#include<iostream>
using namespace std;
int main(){
int a[3][3],c[3][3],i,j;
cout<<"Enter the elements of the matrix: ";
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cin>>a[i][j];
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        c[i][j]=0;
        for(int k=0;k<3;k++){
        c[i][j]+=a[i][k]*a[k][j];
        }
    }
}
cout<<"The square of the matrix is: "<<endl;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cout<<c[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}