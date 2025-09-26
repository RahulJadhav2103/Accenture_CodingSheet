#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int decimalTobinary(int num)
{
string ans=" ";
for(int i=31;i>0;i--)
{
    int k=num>>i;
    if(k&1)
    {
        ans.push_back('1');
    }
    else
    {
        ans.push_back('0');
    } 
}
int binarynum=stoi(ans); 
return binarynum;
}

int main()
{
int num=12;
cout<<decimalTobinary(num);
}