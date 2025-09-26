#include<iostream>
#include<vector>
using namespace std;

int equilibrium(vector<int>& v) {
    int totalSum = 0, leftSum = 0;
    for (int num : v) 
    {
        totalSum += num;
    }
    for (int i = 0; i < v.size(); ++i) {
        totalSum -= v[i]; 
        if (leftSum == totalSum) {
            return i;
        }
        
        leftSum += v[i];
    }
    
    return -1; 
}

int main() {
    vector<int> v = {-7, 1, 5, 2, -4, 3, 0 };
    cout << equilibrium(v);
    return 0;
}
