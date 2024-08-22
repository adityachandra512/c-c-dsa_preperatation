#include <iostream>
#include <string>
#include <algorithm>  // For transform and tolower
using namespace std;

// ASCII values for special characters
const char STX = 0x02;  // Start of Text
const char ETX = 0x03;  // End of Text
const char ESC = 0x1B;  // Escape character

string characterStuffing(const string &data) {
    string stuffedData;
    
    // Add STX at the beginning
    stuffedData += STX;

    size_t i = 0;
    while (i < data.size()) {
        // Check for the sequences "stx" and "ext" (case insensitive)
        if (i + 2 < data.size()) {
            string sub = data.substr(i, 3);
            // Convert substring to lowercase
            transform(sub.begin(), sub.end(), sub.begin(), ::tolower);

            // Check if the substring matches "stx" or "ext"
            if (sub == "stx" || sub == "etx") {
                stuffedData += ESC;  // Insert ESC before the sequence
                stuffedData += data.substr(i, 3);  // Add the original sequence itself
                i += 3;  // Move the index forward by 3 positions
                continue;
            }
        }
        stuffedData += data[i];
        i++;
    }

    // Add ETX at the end
    stuffedData += ETX;

    return stuffedData;
}

int main() {
    // Get user input
    string data;
    cout << "Enter data: ";
    getline(cin, data);  // Read the entire line of input

    cout << "Original Data: " << data << endl;

    string stuffedData = characterStuffing(data);

    cout << "Stuffed Data:  ";
    for (char ch : stuffedData) {
        if (ch == STX)
            cout << "<STX>";
        else if (ch == ETX)
            cout << "<ETX>";
        else if (ch == ESC)
            cout << "<ESC>";
        else
            cout << ch;
    }
    cout << endl;

    return 0;
}
