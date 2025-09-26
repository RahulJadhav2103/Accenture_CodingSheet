#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;
int longestSubStrK(string s,int k)
{
unordered_map<char,int> mp;
int i=0,j=0,ans=0;
while(j<s.length())
{
    mp[s[j]]++;
    if(mp.size()<k)
    {
        j++;
    }
    else if(mp.size()==k)
    {
        ans=max(ans,j-i+1);
        j++;
    }
    else if(mp.size()>k)
    {
        while(mp.size()>k)
        {
          mp[s[i]]--;
          if(mp[s[i]]==0)
          {
            mp.erase(s[i]);
          }
          i++;
        }
        j++;
    }
}
return ans;
}
int main()
{
    string s="aabcbecebe";
    int k=3;
    cout<<longestSubStrK(s,k);
}