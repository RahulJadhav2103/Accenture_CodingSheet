#include<iostream>
using namespace std;
int targetElement(int arr[],int n,int key)
{
int s=0;
int e=n-1;
while(s<=e)
{
   int mid=s+(e-s)/2;
   if(arr[mid]==key)
   {
    return mid;
   } 
   if(arr[mid]>key)
   {
    e=mid-1;
   }
   else
   {
    s=mid+1;
   }
}
return -1;
}
int main()
{
    int arr[]={1,3,4,7,8};
    int t=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<targetElement(arr,n,t);
}