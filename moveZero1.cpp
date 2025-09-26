#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={1,0,0,32,12,0};
    int left=0;
    for(int right=0;right<6;right++)
    {
        if(v[right]!=0)
        {
        swap(v[right],v[left]);
        left++;
        }
    }
    for(int x:v)
    {
        cout<<x<<" ";
    }

}