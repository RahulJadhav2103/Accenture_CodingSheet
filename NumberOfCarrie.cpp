#include<iostream>
using namespace std;
int NumberofCarry(int n1,int n2)
{   
    int carry=0,rem1=0,rem2=0,result=0,carryover=0;
    while(n1>0&&n2>0)
    {
        rem1=n1%10;
        rem2=n2%10;
        result=rem1+rem2+carryover;
        if(result>9)
        {
            carry++;
            carryover=1;
        }
        else
        {
            carryover=0;
        }
        n1/=10;
        n2/=10;
    }
    return carry;
}
int main()
{
    int n1=451,n2=349;
    cout<<NumberofCarry(n1,n2);
    return 0;
}