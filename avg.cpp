#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    int avg=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0 && arr[i]%3==0)
        {
            
            sum+=arr[i];
            avg++;
        }
    }

    int average=sum/avg;
    cout<<average;
    return 0;
}