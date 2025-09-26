#include<iostream>
using namespace std;
int cakecut(int n)
{
    int m=1000000007;
    int cut= (n*(n+1)/2+1);
    return cut%m;
}
int main()
{
    int n=4;
    cout<<cakecut(n);
    return 0;
}