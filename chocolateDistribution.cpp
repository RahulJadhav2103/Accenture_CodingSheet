#include<iostream>
#include<algorithm>
using namespace std;
int dist(int arr[],int m,int n)
{
    int min_diff=INT32_MAX;
    if(m==0||n==0)
    {
        return 0;
    }
    if(n<m)
    {
        return -1;
    }
    sort(arr,arr+n);
    for(int i=0;i+m-1<n;i++)
    {
        int diff=arr[i+m-1]-arr[i];
        if(diff<min_diff)
        {
            min_diff=diff;
        }
    }
    
return min_diff;
}
int main()
{
    int arr[]={3,4,1,9,56,7,9,12};
    int m=5;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<dist(arr,m,n);
    return 0;
}