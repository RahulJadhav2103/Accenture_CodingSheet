#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Pivot(vector<int> v)
{
    int start=0,end=v.size()-1;
    int mid=(start+end)/2;
    while (start<end)
    {
        
        if(v[mid]>=v[0])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
        mid=(start+end)/2;
    }
    return start;
    
}
int main()
{
    vector<int> v={7,9,10,2,1};
    int result=Pivot(v);
    cout<<result;
    return 0;
}