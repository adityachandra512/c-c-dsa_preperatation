#include<iostream>
#include<cmath>
using namespace std;
int main(){
int mat[3][3];
int i,j;
int sum=0,elesq=0;
int normal,trace=0;
cout<<"enter value for the matrix"<<endl;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cin>>mat[i][j];
        elesq=mat[i][j]*mat[i][j];
        sum=sum+elesq;
    }
}
cout<<"enter matrix is "<<endl;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
}
normal=sqrt(sum);
cout<<"the normal of the given matrix is "<<normal;
for(i=0;i<3;i++){
    trace=trace+mat[i][i];
}
cout<<"the trace of the matrix is"<<trace;
return 0;
}