#include<iostream>
#include<math.h>
using namespace std;
int rearrangbit(int num)
{
    int count=0,result=0;
    while(num)
    {
        num=num>>1;
        count+=num&1;
    }
    result=pow(2,count)-1;
    return result;
}
int main()
{
    int num=12;
    cout<<rearrangbit(num);
    return 0;
}