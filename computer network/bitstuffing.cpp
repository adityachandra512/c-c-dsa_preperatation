#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to convert binary string to a vector of integers
vector<int> stringToVector(const string& binaryString) {
    vector<int> data;
    for (char bit : binaryString) {
        if (bit == '0' || bit == '1') {
            data.push_back(bit - '0');  // Convert char to int
        } else {
            cout << "Invalid character in input. Only '0' and '1' are allowed." << endl;
            exit(1);
        }
    }
    return data;
}

// Function to check for pattern 01111110 and apply bit stuffing
vector<int> bitStuffing(vector<int> data) {
    vector<int> stuffedData;
    size_t i = 0;
    
    while (i < data.size()) {
        stuffedData.push_back(data[i]);

        // Check for the specific pattern 01111110
        if (i >= 6 && data[i] == 0 && data[i-1] == 1 && data[i-2] == 1 && data[i-3] == 1 && data[i-4] == 1 && data[i-5] == 1 && data[i-6] == 0) {
            stuffedData.push_back(0);  // Stuff bit after pattern 01111110
        }

        // Check for five consecutive 1s
        int count = 0;
        for (size_t j = i; j < data.size() && data[j] == 1; ++j) {
            count++;
        }

        if (count == 5) {
            stuffedData.push_back(0);  // Stuff bit after five consecutive 1s
            i += 5;  // Skip the next 5 bits
        } else {
            i++;
        }
    }

    return stuffedData;
}

// Function to print the vector with explicit notation for stuffed bits
void printData(const vector<int>& data) {
    for (size_t i = 0; i < data.size(); ++i) {
        if (i > 0 && data[i] == 0 && data[i-1] == 1 && data[i-2] == 1 && data[i-3] == 1 && data[i-4] == 1 && data[i-5] == 1 && data[i-6] == 0) {
            cout << "<0>";  // Display <0> for stuffed bits
        } else {
            cout << data[i];
        }
    }
    cout << endl;
}

int main() {
    // Get user input
    string binaryString;
    cout << "Enter binary data (0s and 1s): ";
    cin >> binaryString;  // Read the input

    vector<int> data = stringToVector(binaryString);

    cout << "Original Data: ";
    printData(data);

    vector<int> stuffedData = bitStuffing(data);

    cout << "Stuffed Data:  ";
    printData(stuffedData);

    return 0;
}
