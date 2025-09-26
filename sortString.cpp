#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool sortString(string &s,string &t)
{
     if(s.length()!=t.length())
    {
        return false;
    }
    // sort(s.begin(),s.end());
    // sort(t.begin(),t.end());
    // for(int i=0;i<s.length();i++)
    // {
    //     if(s[i]!=t[i])
    //     {
    //         return false;
    //     }
    // }
    // return true;

    vector<int> freq(26,-1);
    for(int i=0;i<s.length();i++)
    {
        freq[s[i]-'a']++;
        freq[t[i]-'a']--;
    }

    
    for(int i=0;i<26;i++)
    {
        if(freq[i]!=-1)
        {
            return false;
        }
    }
    return true;

}
int main()
{
    string s="listen";
    string t="silent";
    if(sortString(s,t))
    {
        cout<<"Rearrange possible";
    }
    else
    {
        cout<<"not possible";
    }
    return 0;
}