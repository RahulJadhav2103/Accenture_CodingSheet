#include<iostream>
using namespace std;
int carry(int num1,int num2)
{
    int carryCount=0;
    int rem1=0;
    int rem2=0;
    int carryOver=0;
    while (num1!=0 && num2!=0)
    {
        rem1=num1%10;
        rem2=num2%10;
        if(rem1+rem2+carryOver>9)
        {
            carryCount++;
            carryOver++;
        }
        num1/=10;
        num2/=10;
    }
        return carryCount;
}
int main()
{
    int num1=451,num2=549;
    cout<<carry(num1,num2);
    return 0;
}