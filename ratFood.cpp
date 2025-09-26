#include<iostream>
using namespace std;
int ratFood(int arr[],int n,int r,int unit)
{
    int total_food=r*unit;
    int food_total=0;
    for(int i=0;i<n;i++)
    {
        food_total+=arr[i];
        if(food_total>=total_food)
        {
            return i+1;
        }
    }
return 0;
}
int main()
{
    int arr[]={2,8,3,5,7,4,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int r=7;
    int unit=2;
    cout<<ratFood(arr,n,r,unit);
    return 0;
}