#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
void occ(vector<int>& nums)
{
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++)
    {
       mp[nums[i]]++; 
    }
    for(auto x:mp)
    {
        cout<<x.first<<" "<<x.second<<" "<<endl;
    }
  
}
int main()
{
    vector<int> nums={1,2,3,3,2,1,2,2,2,4,2,2,4};
    
    occ(nums);
}