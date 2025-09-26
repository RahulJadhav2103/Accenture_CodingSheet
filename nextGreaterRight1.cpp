#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
vector<int> ng(vector<int> num)
{
    vector<int> result(num.size(),-1);
    stack<int> s;
    for(int i=0;i<num.size();i++)
    {
        while(!s.empty() && num[s.top()]<num[i])
        {
            result[s.top()]=num[i];
            s.pop();
        }
        s.push(i);
    }
    return result;
}
int main()
{
    vector<int> num={4,5,2,35};
    vector<int> result=ng(num);
    for(int val:result)
{
    cout<<val<<" ";
}
}