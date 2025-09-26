#include<iostream>
using namespace std;
int main()
{
    int first=0,second=1,next,n;
    cout<<"Enter number that you want fibonacci Series:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<first<<" ";
        next=first+second;
        first=second;
        second=next;
    }

}