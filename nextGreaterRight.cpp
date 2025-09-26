//IP=[4,5,2,25]
//OP=[5,25,25,-1]

#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
vector<int> nextGreater(const vector<int>& arr)
{
int n=arr.size();
vector<int> result(n,-1);
stack<int> s;

    for(int i=0;i<n;i++)
    {
        while(!s.empty() && arr[s.top()]<arr[i])
        {
            result[s.top()]=arr[i];
            s.pop();
        }
        s.push(i);
    }
return result;
}


int main()
{

vector<int> arr={4,5,2,25};
vector<int> result=nextGreater(arr);
for(int val:result)
{
    cout<<val<<" ";
}
}