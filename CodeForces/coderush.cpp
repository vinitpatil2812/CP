#include <bits/stdc++.h>
using namespace std;

// Function to solve the problem recursively
int solve(string &s, int idx, int x, int y, int cx, int cy) {
    // If we have processed the entire string
    if (idx == s.length()) {
        // Check if the ratio of 0's and 1's matches the given x/y ratio
        if (cx * y == cy * x) {
            return 1; // Substring is well-balanced
        }
        return 0; // Substring is not well-balanced
    }

    // if (cx * y == cy * x) {
    //         return 1; // Substring is well-balanced
    //     }

    int zero = 0;
    int one = 0;

    // Check if the current character is 0 or 1
    if (s[idx] == '0') {
        zero = 1;
        one = 0;
    } else {
        one = 1;
        zero = 0;
    }

    // Recursively count well-balanced substrings by considering the current character or not
    int take = solve(s, idx + 1, x, y, cx + zero, cy + one); // Include the current character
    int notTake = solve(s, idx + 1, x, y, cx, cy); // Exclude the current character

    return take + notTake; // Return the total count of well-balanced substrings
}

int main() {
    int n, x, y;
    cin >> n >> x >> y; // Read input values
    string s;
    cin >> s; // Read binary string

    int cx = 0, cy = 0; // Initialize counters for 0's and 1's

    // Call the solve function with initial parameters and output the result
    cout << solve(s, 0, x, y, cx, cy);

    return 0;
}