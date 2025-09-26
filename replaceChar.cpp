#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void *replaceChar(char s[],char ch1,char ch2,int n)
{
    for(int i=0;i<n;i++)
    {
        if(s[i]==ch1)
        {
            s[i]=ch2;
        }
    }
    cout<<s;
}
int main()
{
char s[]={'a','p','p','l','e','\0'};
char ch1='p';
char ch2='q';
int n=5;
replaceChar(s,ch1,ch2,n);

}
