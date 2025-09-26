#include <iostream>
using namespace std;

int nearestInteger(int num, int m) {
    // Calculate the nearest multiple of m
    int lowerMultiple = (num / m) * m;
    int upperMultiple = lowerMultiple + m;

    // Determine which multiple is closer to num
    if (num - lowerMultiple < upperMultiple - num) {
        return lowerMultiple;
    } else {
        return upperMultiple;
    }
}

int main() {
    int num = 67;
    int m = 8;
    cout << "Nearest integer to " << num << " that is a multiple of " << m << " is: " << nearestInteger(num, m) << endl;
    return 0;
}
