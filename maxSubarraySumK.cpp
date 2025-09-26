#include<iostream>
using namespace std;
int maxSubarraySumK(int arr[],int n,int k)
{
    int maxS=INT32_MIN,sum=0,i=0,j=0;
    while(j<n)
    {
        sum+=arr[j];
        if(j-i+1<k)
        {
            j++;
        }
        else if (j-i+1==k)
        {
            maxS=max(maxS,sum);
            sum-=arr[i];
            i++;
            j++;

        }     
    }
    return maxS;
}
int main()
{
    int arr[]={2,3,8,7,5,2,14,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    cout<<maxSubarraySumK(arr,n,k);
}