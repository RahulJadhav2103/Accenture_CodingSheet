#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int peek(vector<int> num)
{
int start=0,end=num.size()-1;
while(start<end)
{
    int mid=(start+end)/2;
    if(num[mid]<num[mid+1])
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
    vector<int> num={1, 3, 7, 9, 8, 4, 2};
    int res=peek(num);
    cout<<res;
}