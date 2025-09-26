#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double even_sum=0;
    double odd_sum=0;
    int m,n;
    cin>>m>>n;
    for(int i=m;i<=n;i++)
    {
        double squre=sqrt(i);
        if(i%2==0)
        {
            even_sum+=squre;
        }
        else
        {
            odd_sum+=squre;
        }
    }
    double result= even_sum-odd_sum;
    cout<<result;
}