#include<iostream>
#include<unordered_map>
using namespace std;
int* two_sum(int arr[],int n,int target)
{
    unordered_map<int, int> um;
    for(int i=0;i<n;i++)
    {
        um[arr[i]]=i;
    }
    for(int i=0;i<n;i++)
    {
        int diff=target-arr[i];
        if(um.find(diff)!=um.end() && um[diff]!=i)
        {
            int* result=new int[2];
            result[0]=i;
            result[i]=um[diff];
            return result;
        }
        
    }
}
int main()
{
    int arr[]={1,4,3,9,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=13;
    int* result=two_sum(arr,n,target);
    if(result)
    {
        cout<<result[0]<<" "<<result[1];
    }
    else
    {
        cout<<"not found";
    }
   

}