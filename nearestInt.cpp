#include<iostream>
using namespace std;
int nearestInteger(int num, int m)
{
int mindiff=INT32_MAX; 
int near=0;   
for(int i=1;i<num;i++)
{
    int result=i*m;
    int ds=num-result;
    if(abs(ds)<mindiff)
    {
        mindiff=abs(ds);
        if(ds<0)
        {
            near= num+mindiff;
        }
        else{
            near=num-mindiff;
        }

    }
}
return near;    
}
int main()
{
    int num=69;
    int m=8;
    cout<<nearestInteger(num,m);
    return 0;
}