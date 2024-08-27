#include<iostream>
using namespace std;
int hcf(int a, int b) {
    if (b == 0) {
        return a;
    }
    return hcf(b, a % b);
}
int main() {
    int x, y = 0;
    cout << "Enter numbers to find HCF (press 0 to exit): ";   
    while (1) {
        cin >> x;
        if (x == 0) {
            break;
        }
        if (y == 0) {  
            y = x;
        } else {
            y = hcf(y, x);
        }
    }
    if (y == 0) {
        cout << "No numbers were entered to compute HCF." << endl;
    } else {
        cout << "The HCF of the given numbers is: " << y << endl;
    }
    return 0;
}
