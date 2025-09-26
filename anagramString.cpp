#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isAnagram(string s,string t)
{
    vector<int> frequency(26,-1);
    if(s.length()!=t.length())
    {
        return false;
    }
    for(int i=0;i<s.length();i++)
    {
        frequency[s[i]-'a']++;
        frequency[t[i]-'a']--;
    }
    for(int i=0;i<26;i++)
    {
        if(frequency[i]!=-1)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s="anagram";
    string t="nagaram";
    if(isAnagram(s,t))
    {
        cout<<"Strings are anagram";
    }
    else
    {
        cout<<"Not anagram";
    }
}

