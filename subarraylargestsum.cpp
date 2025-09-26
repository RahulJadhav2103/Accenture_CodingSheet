#include<iostream>
#include<algorithm>
using namespace std;
void maxSum(int arr[],int n)
{
    int sum=0;
    int maxS=INT32_MIN;
    int start=0,end=0,s=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        //maxS=std::max(maxS,sum);
        if(maxS<sum)
        {
        maxS=sum;
        start=s;
        end=i;
        }
    if(sum<0)
    {
        sum=0;
        s=i+1;
    }
    }
    cout<<"Maximum:"<<maxS<<endl;
    cout<<"Start:"<<start<<endl;
    cout<<"End:"<<end<<endl;
}
int main()
{
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    maxSum(arr,n);
}