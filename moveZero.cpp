#include <vector>
#include <iostream>
using namespace std;

void moveZerosToEnd(vector<int> &v) {
    int nonZeroIndex = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < v.size(); i++) {
        if (v[i] != 0) {
            v[nonZeroIndex++] = v[i];
        }
    }

    // Fill remaining elements with zero
    while (nonZeroIndex < v.size()) {
        v[nonZeroIndex++] = 0;
    }
}

int main() {
    vector<int> v;
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    moveZerosToEnd(v);

    cout << "Array after moving zeros to the end: ";
    for (int a : v) {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}
