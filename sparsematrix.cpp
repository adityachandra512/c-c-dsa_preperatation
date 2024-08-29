#include<iostream>
using namespace std;
int main(){
int a[3][3],i,j,counter=0;
cout<<"Enter the elements of the matrix: ";
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cin>>a[i][j];
        if(a[i][j]==0){
            counter++;
        }
    }
}
cout<<"entered matrix is: "<<endl;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
if(counter>(3*3)/2){
    cout<<"The matrix is a sparse matrix"<<endl;
}
else{
    cout<<"The matrix is not a sparse matrix"<<endl;
}

return 0;
}