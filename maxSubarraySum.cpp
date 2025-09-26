#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxSubarraySum(vector<int>& v)
{
    int maxS=0,sum=0,s=0;
    int start=0;int end;
    for(int i=0;i<v.size();i++)
    {
       sum+=v[i];
       if(sum>maxS)
       {
        maxS=sum;
        start=s;
        end=i;
       } 
       if(sum<0)
       {
        sum=0;
        s=i+1;
       }
    }
    cout<<start<<endl<<end<<endl;
    return maxS;
}
int main()
{
    vector<int> v={-2,1,-3,-4,1,2,1,-5,4};
    cout<<maxSubarraySum(v);
}