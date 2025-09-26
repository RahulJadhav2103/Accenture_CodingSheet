#include<iostream>
using namespace std;
int stairCount(int n,int m)
{
    
    int div=n/m;
    int modr=n%m;

    if(modr==0)
    {
        return div ;
    }
    else{
        return div+modr;
    }
}
int main()
{
    int n=10;
    int m=3;
    cout<<stairCount(n,m);
}