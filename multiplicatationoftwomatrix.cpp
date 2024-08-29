#include<iostream>
using namespace std;
int main(){
int a[3][3],b[3][3],c[3][3],i,j,k;
cout<<"Enter the elements of the first matrix: ";
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cin>>a[i][j];
    }
}
cout<<"Enter the elements of the second matrix: ";
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cin>>b[i][j];
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        c[i][j]=0;
        for(k=0;k<3;k++){
            c[i][j]+=a[i][k]*b[k][j];
        }
    }
}
cout<<"The product of the two matrices is: "<<endl;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cout<<c[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}