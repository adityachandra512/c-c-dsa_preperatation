#include <iostream>
using namespace std;

long bin2dec(char b[]) {
    long dnum = 0;
    int i = 0;
    int n;

    while (b[i] != '\0') {
        n = b[i] - '0';
        if (n != 0 && n != 1) {
            return -1;
        }
        dnum = dnum * 2 + n;
        i++;
    }
    return dnum;
}

int main() {
    char b[20];
    long decNum;

    cout << "Enter a binary number: ";
    cin >> b;

    decNum = bin2dec(b);

    if (decNum == -1) {
        cout << "Invalid binary number entered." << endl;
    } else {
        cout << "The decimal equivalent is: " << decNum << endl;
    }

    return 0;
}
