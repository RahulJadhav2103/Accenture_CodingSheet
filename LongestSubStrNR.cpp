#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;
int LongestSubStr(string& s)
{
unordered_map<char,int> mp;
int i=0,j=0,ans=0;
while(j<s.length())
{
    mp[s[j]]++;
    if(mp[s[j]]<1)
    {
        j++;
    }
    else if(mp[s[j]]==1)
    {
        ans=max(ans,j-i+1);
        j++;
    }
    else if(mp[s[j]]>1)
    {
        while(mp[s[j]]>1)
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
    string s="GreekKGreeks";
    cout<<LongestSubStr(s);
    return 0;
}