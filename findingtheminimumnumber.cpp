#include <iostream>
#include <vector>
#include <cstring> // For memset
#include <algorithm> // For min

using namespace std;

class Solution {
public:
    int dp[500][500]; // Declaring dp array as a class member

    int minDistanceHelper(string& word1, string& word2, int i, int j) {
        // Base cases
        if (i == word1.size() && j == word2.size()) {
            return 0;
        }
        if (i == word1.size()) {
            return word2.size() - j; // Remaining characters in word2 need to be inserted
        }
        if (j == word2.size()) {
            return word1.size() - i; // Remaining characters in word1 need to be deleted
        }
        if (dp[i][j] != -1) return dp[i][j]; // Memoization check

        // If characters are the same, move to the next character in both strings
        if (word1[i] == word2[j]) {
            return dp[i][j] = minDistanceHelper(word1, word2, i + 1, j + 1);
        } else {
            // Calculate the minimum of the three possible operations: insert, delete, or replace
            int op1 = 1 + minDistanceHelper(word1, word2, i, j + 1);   // Insert
            int op2 = 1 + minDistanceHelper(word1, word2, i + 1, j);   // Delete
            int op3 = 1 + minDistanceHelper(word1, word2, i + 1, j + 1); // Replace
            return dp[i][j] = min({op1, op2, op3});
        }
    }

    int minDistance(string word1, string word2) {
        // Initialize dp array with -1 for memoization
        memset(dp, -1, sizeof(dp));
        return minDistanceHelper(word1, word2, 0, 0);
    }
};

// Sample test cases
int main() {
    Solution sol;
    
    // Example 1
    string word1 = "horse";
    string word2 = "ros";
    cout << "Minimum operations to convert '" << word1 << "' to '" << word2 << "' : " << sol.minDistance(word1, word2) << endl; // Output: 3

    // Example 2
    word1 = "intention";
    word2 = "execution";
    cout << "Minimum operations to convert '" << word1 << "' to '" << word2 << "' : " << sol.minDistance(word1, word2) << endl; // Output: 5

    return 0;
}
