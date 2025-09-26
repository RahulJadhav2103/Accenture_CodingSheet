#include <bits/stdc++.h>
using namespace std;

bool searchSortedMatrix(vector<vector<int>>& mat, int x) {
    int n = mat.size();
    int m = mat[0].size();
    cout<<n<<endl;
    cout<<m<<endl;
    int lo = 0, hi = n * m - 1;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        int row = mid / m;
        int col = mid % m;
        if (mat[row][col] == x) return true;
        else if (mat[row][col] < x) lo = mid + 1;
        else hi = mid - 1;
    }
    return false;
}

int main() {
    vector<vector<int>> mat = {
        {0, 6, 8, 9, 11},
        {20, 22, 28, 29, 31},
        {36, 38, 50, 61, 63},
        {64, 66, 100, 122, 128}
    };
    int x = 31;

    bool res = searchSortedMatrix(mat, x);
    cout << (res ? "true" : "false") << endl;

    return 0;
}
