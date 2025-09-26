#include<iostream>
using namespace std;
int diffofsum(int n,int m)
{
    int divTotal=0;
    int nodivTotal=0;
    for(int i=1;i<=n;i++)
    {
        if(i%m==0)
        {
            divTotal+=i;
        }
        else
        {
            nodivTotal+=i;
        }
    }
    return nodivTotal-divTotal;
}
int main()
{
    int n=30,m=6;
    cout<<diffofsum(n,m);
    return 0;
}