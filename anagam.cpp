#include<iostream>
using namespace std;
int anagam(char [],char[]);
int anagam(char s1[],char s2[]){
int first[256]={0},second[256]={0};
int i=0;
while(s1[i]!='\0'){
    first[s1[i]]++;
    i++;
}
i=0;
while(s2[i]!='\0'){
    second[s2[i]]++;
    i++;
}
for(i=0;i<256;i++){
    if(first[i]!=second[i]){
        return 0;
    }
}
return 1;
}
int main(){
char str1[100],str2[100];
int check;
cout<<"Enter the first string: ";
cin>>str1;
cout<<"Enter the second string: ";
cin>>str2;
check=anagam(str1,str2);
if(check==1){
    cout<<str1<<" and "<<str2<<" are anagrams."<<endl;
}
else{
    cout<<str1<<" and "<<str2<<" are not anagrams."<<endl;
}
return 0;
}