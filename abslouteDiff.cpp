#include<iostream>
using namespace std;
int findcount(int arr[],int n,int num,int diff)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(abs(num-arr[i])<=diff)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[]={12,3,57,77,14,13};
    int n=sizeof(arr)/sizeof(arr[0]);
    int num=13;
    int diff=2;
    cout<<findcount(arr, n, num, diff);
    return 0;
}