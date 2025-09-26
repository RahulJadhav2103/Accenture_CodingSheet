#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> removeDuplicates(const vector<int>& arr) {
    vector<int> result;
    unordered_set<int> seen;

    for (int num : arr) {
        // If the element has not been encountered, add it to result
        if (seen.find(num) == seen.end()) {
            result.push_back(num);
            seen.insert(num);
        }
    }

    return result;
}

int main() {
    vector<int> arr = {1, 2, 3, 1, 2, 4, 5, 3};
    
    vector<int> uniqueArr = removeDuplicates(arr);
    
    cout << "Array after removing duplicates: ";
    for (int num : uniqueArr) {
        cout << num << " ";
    }

    return 0;
}
