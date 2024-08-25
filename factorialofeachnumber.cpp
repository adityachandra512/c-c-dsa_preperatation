#include<iostream>
using namespace std;

int main() {
    int n;
    int cn;
    int i, j;
    long int fact;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Factorial of each number from 1 to " << n << " is: " << endl;
    cout << "number: factorial" << endl;

    for (i = 1; i <= n; i++) {
        cn = i;
        fact = 1;

        for (j = 1; j <= cn; j++) {
            fact = fact * j;
        }

        cout << cn << ":" << fact << endl;
    }

    return 0;
}