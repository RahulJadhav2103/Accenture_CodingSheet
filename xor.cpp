#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int arr[]={3,2,1};
    int count=0;
    for(int i=0;i<6;i++)
    {
        count^=arr[i];
    }
    cout<<count;
}