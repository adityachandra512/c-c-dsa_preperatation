#include<iostream>
using namespace std;

int max_num(int a[], int n) {
    int m = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] > m) {
            m = a[i];
        }
    }
    return m;
}

int main() {
    int n;
    int a[50];
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    cout << "Enter the elements of the array:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int max = max_num(a, n);
    cout << "The largest number is: " << max << endl;
    
    return 0;
}
