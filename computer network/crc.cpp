#include <iostream>
#include <string>
using namespace std;

string xorOperation(string a, string b) {
    string result = "";
    int n = b.length();
    
    for (int i = 1; i < n; i++) {
        result += (a[i] == b[i]) ? '0' : '1';
    }
    
    return result;
}

string mod2div(string dividend, string divisor) {
    int pick = divisor.length();
    string tmp = dividend.substr(0, pick);

    int n = dividend.length();
    
    while (pick < n) {
        if (tmp[0] == '1') {
            tmp = xorOperation(divisor, tmp) + dividend[pick];
        } else {
            tmp = xorOperation(string(pick, '0'), tmp) + dividend[pick];
        }
        pick++;
    }

    if (tmp[0] == '1') {
        tmp = xorOperation(divisor, tmp);
    } else {
        tmp = xorOperation(string(pick, '0'), tmp);
    }

    return tmp;
}

string calculateCFC(const string& data, const string& generator) {
    int m = generator.length();
    string appendedData = data + string(m - 1, '0');

    string remainder = mod2div(appendedData, generator);

    return remainder;
}

int main() {
    string data;
    string generator;

    cout << "Enter data: ";
    cin >> data;
    cout << "Enter generator polynomial: ";
    cin >> generator;

    string cfcResult = calculateCFC(data, generator);
    cout << "CFC (CRC) Result: " << cfcResult << endl;

    // Append the CFC result to the original data
    string encodedData = data + cfcResult;
    cout << "Encoded Data (Data + CRC): " << encodedData << endl;

    return 0;
}
