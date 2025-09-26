#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
int getPivot(vector<int>& v )
{
    int start=0,end=v.size()-1;
    
    
    while (start<end)
    {   
        int mid = start + (end - start) / 2;
        if(v[mid]>=v[0])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
        
    }
    return start;
    
}
int binarySearch(vector<int>& v, int start, int end, int key)
{
    int s=start;
    int e=end;
    while (s <= e) {
        int mid = s+(e - s) / 2;

        if (v[mid] == key)
        {
            return mid;
        }
     
        if (v[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

   
    return -1;
}
    int search(vector<int>& v, int key) {
        int pivot=getPivot(v);
        int n=v.size();
       
        if(key>=v[pivot] && key<=v[n-1])
        {
            return binarySearch(v, pivot,n-1,key);
        }
        else
        {
            return binarySearch(v,0 ,pivot-1,key);
        }
        
    }
};

int main()
{
    vector<int> v={7,8,9,1,2,3,4,5};
    int key=3;
    Solution sol;
    cout << sol.search(v, key);
    return 0;
}