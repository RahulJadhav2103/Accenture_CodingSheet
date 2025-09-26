#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool isPalindrome(string s)
{
    int start=0;
    int end=s.length()-1;
    while(start<end)
    {
        if(s[start]!=s[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main()
{
    string s="amamaa";
    if(isPalindrome(s))
    {
        cout<<"String is Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
}