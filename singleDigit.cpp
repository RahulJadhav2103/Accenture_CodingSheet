#include<iostream>
#include<cmath>
using namespace std;
int singleDigit(int n)
{
   while(n>9)
   {
    if(n%2!=0)
    {
        n=floor(n/2);
    }
    else
    {
        n=floor((n-2)/2);
    }
   }
   return n;
}
int main()
{
    int n=10;
    cout<<singleDigit(n);
    return 0;
}