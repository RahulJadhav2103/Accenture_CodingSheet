#include<iostream>
using namespace std;
int largest(int arr[],int n)
{
    int max=arr[0];
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[]={1,3,4,5,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<largest(arr,n);
}