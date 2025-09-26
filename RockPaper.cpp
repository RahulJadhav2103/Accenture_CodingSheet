#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s1="SSSSSSRRR";
    string s2="SSSRRPPSS";
    int kcount=0,ccount=0;
    if(s1.length()!=s2.length())
    {
        return false;
    }
    for(int i=0;i<s1.length();i++)
    {
    if(s1[i]=='R' && s2[i]=='P')
    {
        ccount++;
    }
    else if(s1[i]=='P' && s2[i]=='S')
    {
        ccount++;
    }
    else if(s1[i]=='S' && s2[i]=='R')
    {
        ccount++;
    }
    else if(s1[i]=='S' && s2[i]=='P')
    {
        kcount++;
    }
    else if(s1[i]=='P' && s2[i]=='R')
    {
        kcount++;
    }
    else if(s1[i]=='R' && s2[i]=='S')
    {
        kcount++;
    }
    else 
    {
        kcount++;
        ccount++;
    }
    }
    cout<<kcount<<endl<<ccount<<endl;
    if(kcount>ccount)
    {
        cout<<"Kyle";
    }
    else if(ccount>kcount)
    {
        cout<<"Candy";
    }
    else
    {
        cout<<"Draw";
    }
}