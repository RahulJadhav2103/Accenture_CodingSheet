#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string sorting(string &s)
{
    sort(s.begin(),s.end());
    return s;
}
int main()
{
    string s="rahul";
    cout<<sorting(s);
}