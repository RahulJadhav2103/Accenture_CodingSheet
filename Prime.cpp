#include<iostream>
#include<math.h>
using namespace std;
bool primeNumber(int num)
{
    
    if(num==0||num==1)
    {
        return false;
    }
    for(int i=2;i*i<num;i++)
    {
        if(num%i==0)
        {
            return false;
        }
       
    }
   return true; 
}
void primes(int n)
{
    for(int i=2;i<n;i++)
    {
        if(primeNumber(i))
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n;
    cin>>n;
    primes(n);
}