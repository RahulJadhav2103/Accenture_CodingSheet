#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    // Min-heap to store the top k largest elements
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Build a min-heap of the first k elements
    for (int i = 0; i < k; i++) {
        minHeap.push(nums[i]);
    }

    // Process the remaining elements
    for (int i = k; i < nums.size(); i++) {
        if (nums[i] > minHeap.top()) {
            minHeap.pop();         // Remove the smallest of the k largest elements
            minHeap.push(nums[i]); // Add the current element
        }
    }

    // The root of the min-heap is the kth largest element
    return minHeap.top();
}

int main() {
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;

    int kthLargest = findKthLargest(nums, k);
    cout << "The " << k << "th largest element is: " << kthLargest << endl;

    return 0;
}
