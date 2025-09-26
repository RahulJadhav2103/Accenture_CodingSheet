#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
pair<int,int>  pairEvenOdd(vector<int> v)
{
    
    int evensum=0,oddsum=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]%2==0)
        {
            evensum+=v[i];
        }
        else
        {
            oddsum+=v[i];
        }

    }
    return make_pair(evensum,oddsum);
}
int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9};
    pair<int,int> res=pairEvenOdd(v);
    cout<<"Even:"<<res.first<<",odd:"<<res.second;
    
}