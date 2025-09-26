#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to check if two vectors of strings are equal in terms of character composition
bool isEqual(vector<string> s1, vector<string> s2) {
    // Frequency vector initialized to 0 for 26 lowercase English letters
    vector<int> freq(26, 0);
    
    // Increment frequency for each character in the first vector of strings
    for (const string& str : s1) {
        for (char ch : str) {
            freq[ch - 'a']++;
        }
    }
    
    // Decrement frequency for each character in the second vector of strings
    for (const string& str : s2) {
        for (char ch : str) {
            freq[ch - 'a']--;
        }
    }
    
    // Check if all frequencies are zero
    for (int count : freq) {
        if (count != 0) {
            return false; // Characters are not balanced
        }
    }
    
    return true; // All character frequencies are zero, indicating equality
}

int main() {
    vector<string> s1 = {"a", "bc"};
    vector<string> s2 = {"ab", "c"};
    
    if (isEqual(s1, s2)) {
        cout << "The strings are equal" << endl;
    } else {
        cout << "The strings are not equal" << endl;
    }
    
    return 0;
}
