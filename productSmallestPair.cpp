#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int ProductSmallestPair(int arr[],int n,int sum)
{
    if(arr==NULL||n<2)
    {
        return -1;
    }
    int smallest1 = INT32_MAX, smallest2 = INT32_MAX;

    
    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest1) {
            smallest2 = smallest1;  // Update the second smallest
            smallest1 = arr[i];      // Update the smallest
        } else if (arr[i] < smallest2) {
            smallest2 = arr[i];      // Update the second smallest
        }
    }


    if(smallest1+smallest2<=sum||smallest1!=smallest2)
    {
        return smallest1*smallest2;
    }
    else
    {
        return 0;
    }
    
    
}
int main()
{
    int arr[]={5,2,4,3,9,7,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=13;
    
    cout<<ProductSmallestPair(arr, n,sum);
    return 0;
}