#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int min_ele=INT32_MAX;
    int max_ele=INT32_MIN;
    vector<int> v={7,1,5,3,2};
    for(int i=0;i<v.size();i++)
    {
        min_ele=min(min_ele,v[i]);
        max_ele=max(max_ele,v[i]-min_ele);
    }
    cout<<max_ele;
}