#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string changePositionWord(string &s)
{
    reverse(s.begin(),s.end());
    int i=0,j=0;
    int n=s.length();
    while(j<n)
    {
        if(s[j]==' ')
        {
            reverse(s.begin()+i,s.begin()+j);
            j++;
            i=j;
        }
        else
        {
            j++;
        }
    }
    if(i<j)
    {
        reverse(s.begin()+i,s.begin()+j);
    }
return s;
}

int main()
{
    string s;
    getline(cin,s);

    cout<<changePositionWord(s);
}