#include<iostream>
using namespace std;
int main(){
int a[3][3],i,j;
cout<<"Enter the elements of the matrix: ";
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cin>>a[i][j];
    }
}
cout<<"The matrix is: "<<endl;  
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}