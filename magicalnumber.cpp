#include<iostream>
#include<string>
using namespace std;
bool isMagical(int num)
{
    string binnum="";
    while(num>0)
    {
        binnum = (num % 2 == 0 ? '0' : '1') + binnum;
        num/=2;
    }

    for(char &ch : binnum)
    {
        if(ch=='0')
        {
            ch='1';
        }
        else if(ch=='1')
        {
            ch='2';
        }
    }
    int digsum=0;
    for(char ch : binnum)
    {
      digsum+=ch -'0';
    }

    return (digsum %2 !=0);
}

int countMagical(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
    if(isMagical(i))
    {
       count++;
    }
    }
    return count;
}

int main()
{
   int n = 10;
    cout << "Number of magical numbers from 1 to " << n << ": " << countMagical(n) << endl;
    return 0;
}