#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
string replace(string s)
{
    string ans=" ";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a')
        {
            ans.push_back('b');
        }
        else if(s[i]=='b')
        {
            ans.push_back('a');
        }
        else
        {
          ans.push_back(s[i]);
        }
        
    }
    return ans;
}
int main()
{
   string s="ababc";
   cout<<replace(s);

}
