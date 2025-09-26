#include<iostream>
using namespace std;
int binaryDigitSum(int &num)
{
int sum=0;
for(int i=31;i>=0;i--)
{
    int k=num>>i;
    sum+=(k&1);
}
return sum;  
}
int main()
{
    int num=15;
    cout<<binaryDigitSum(num);
    return 0;
}