#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int PeakElement(vector<int> v)
{
    int start=0,end=v.size()-1;
    int mid=(start+end)/2;
    while (start<end)
    {
        int mid=(start+end)/2;
        if(v[mid]<v[mid+1])
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
int main()
{
    vector<int> v={7,9,10,2,1};
    int result=PeakElement(v);
    cout<<result;
    return 0;
}