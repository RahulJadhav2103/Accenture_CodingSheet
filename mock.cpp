#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void mock(string& s)
{
int i=0,j=0,n=s.length();
string str=" ";
while(j<=n)
{
if(( isupper(s[j])) ||s[j]=='\0')
{

transform(str.begin(),str.end(),str.begin(),::toupper);
cout<<str<<endl;
str.clear();

s[j]=tolower(s[j]);
cout<<s[j];

j++;
i=j;

}
else
{
    str.push_back(s[j]);
    j++;
}
}
}



int main()
{
    string s="saveChangeInOutput";
    mock(s);
    return 0;
}