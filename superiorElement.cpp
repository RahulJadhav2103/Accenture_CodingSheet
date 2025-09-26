#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int superiorElement(vector<int>& v)
{
    int sup=INT32_MIN;
    int count=0;
    for(int i=v.size()-1;i>=0;i--)
    {
        if(v[i]>sup)
        {
            sup=v[i];
            count++;
        }
    }
    return count;
}
int main()
{
    vector<int> v={8,10,6,2,9,7};
    cout<<superiorElement(v);
    return 0;
}