#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
string rev(string s)
{
    int start=0;
    int end=s.length()-1;
    while(start<end)
    {
       swap(s[start],s[end]);
       start++;
       end--;
    }
    return s;
}
int main()
{
    string s="Hello World";
    cout<<rev(s);
    
}