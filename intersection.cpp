#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> intersect(int arr1[], int size1, int arr2[], int size2) {
    unordered_map<int, int> freq;
    vector<int> result;

    // Count frequencies of elements in arr1
    for(int i = 0; i < size1; i++) {
        freq[arr1[i]]++;
    }

    // Find intersection with arr2
    for(int i = 0; i < size2; i++) {
        if(freq[arr2[i]] > 0) {
            result.push_back(arr2[i]);
            freq[arr2[i]]--;
        }
    }
    return result;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    vector<int> result2 = intersect(arr1, size1, arr2, size2);
    
    for(int i = 0; i < result2.size(); i++) {
        cout << result2[i] << " ";
    }
    return 0;
}
