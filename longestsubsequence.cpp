#include <iostream>
#include <vector>
#include <algorithm> // For max

using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        vector<int> LIS(n, 1); // Initialize LIS array with 1

        // Iterate over each element in the array
        for (int i = 0; i < n; i++) {
            // Check all previous elements to find the longest increasing subsequence
            for (int j = i - 1; j >= 0; j--) {
                if (nums[j] < nums[i]) {
                    LIS[i] = max(LIS[i], LIS[j] + 1); // Update LIS[i] if a longer subsequence is found
                }
            }
            // Update the answer with the maximum LIS found so far
            ans = max(ans, LIS[i]);
        }
        return ans;
    }
};

// Sample test cases
int main() {
    Solution sol;

    // Example 1
    vector<int> nums1 = {10, 9, 2, 5, 3, 7, 101, 18};
    cout << "Length of Longest Increasing Subsequence: " << sol.lengthOfLIS(nums1) << endl; // Output: 4

    // Example 2
    vector<int> nums2 = {0, 1, 0, 3, 2, 3};
    cout << "Length of Longest Increasing Subsequence: " << sol.lengthOfLIS(nums2) << endl; // Output: 4

    // Example 3
    vector<int> nums3 = {7, 7, 7, 7, 7, 7, 7};
    cout << "Length of Longest Increasing Subsequence: " << sol.lengthOfLIS(nums3) << endl; // Output: 1

    return 0;
}
