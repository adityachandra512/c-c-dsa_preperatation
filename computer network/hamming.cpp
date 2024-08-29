#include <iostream>
#include <cmath>
using namespace std;

int calculateParity(int* bits, int position, int dataSize) {
    int parity = 0;
    for (int i = position; i <= dataSize; i += (position * 2)) {
        for (int j = i; j < i + position && j <= dataSize; j++) {
            parity ^= bits[j];
        }
    }
    return parity;
}
void generateHammingCode(int data[], int m) {

    int r = 0;
    while (pow(2, r) < (m + r + 1)) {
        r++;
    }

    int totalBits = m + r;
    int hammingCode[totalBits + 1];
    int j = 0;
    for (int i = 1; i <= totalBits; i++) {
        if ((i & (i - 1)) == 0) {
            hammingCode[i] = 0;
        } else {
            hammingCode[i] = data[j++];
        }
    }
    for (int i = 0; i < r; i++) {
        int parityPosition = pow(2, i);
        hammingCode[parityPosition] = calculateParity(hammingCode, parityPosition, totalBits);
    }

    cout << "Generated Hamming Code: ";
    for (int i = 1; i <= totalBits; i++) {
        cout << hammingCode[i];
    }
    cout << endl;
}

int main() {
    int m;
    cout << "Enter the number of data bits: ";
    cin >> m;

    int data[m];
    cout << "Enter the data bits: ";
    for (int i = 0; i < m; i++) {
        cin >> data[i];
    }

    generateHammingCode(data, m);

    return 0;
}
