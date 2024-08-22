#include <iostream>
using namespace std;

void bitStuffing(int data[], int size) {
    const int newSize = size * 2;
    int stuffedData[newSize];
    int count = 0;
    int j = 0;

    for (int i = 0; i < size; i++) {
        stuffedData[j++] = data[i];
        if (data[i] == 1) {
            count++;
        } else {
            count = 0;
        }

        if (count == 5) {
            stuffedData[j++] = 0;
            count = 0;
        }
    }

    cout << "Stuffed Data: ";
    for (int i = 0; i < j; i++) {
        cout << stuffedData[i];
    }
    cout << endl;
}

int main() {
    // Example input data: 01111110
    int data[] = {0, 1, 1, 1, 1, 1, 1, 0};
    int size = sizeof(data) / sizeof(data[0]);

    cout << "Original Data: ";
    for (int i = 0; i < size; i++) {
        cout << data[i];
    }
    cout << endl;

    bitStuffing(data, size);

    return 0;
}
