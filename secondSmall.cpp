#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

pair<int,int> secondSmall(vector<int> v)
{
    int smallest=INT32_MAX, secondSmallest=INT32_MAX;

    for(int i=0; i<v.size(); i++)
    {
        if(v[i] < smallest)
        {
            secondSmallest = smallest; 
            smallest = v[i];
        }
        else if(v[i] < secondSmallest && v[i] != smallest) 
        {
            secondSmallest = v[i];
        }
    }

    return make_pair(smallest, secondSmallest);
}

int main()
{
    vector<int> v = {5, 2, 4, 3, 9, 7, 1};
    int sum=5;
    pair<int, int> result = secondSmall(v);
    if(result.first+result.second<=sum)
    {
        cout<<result.first*result.second;
    }
    else
    {
    return 0;
    }
}
