#include<iostream>
using namespace std;
int main(){
int a[3][3],b[3][3],c[3][3],i,j;
cout<<"Enter the elements of the first matrix: ";
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cin>>a[i][j];
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        c[i][j]=a[i][j];
    }
}
cout<<"Enter the elements of the second matrix: ";
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cin>>b[i][j];
    }
}
cout<<"The sum of the two matrices is: "<<endl;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        c[i][j]=c[i][j]+b[i][j];
        cout<<c[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}