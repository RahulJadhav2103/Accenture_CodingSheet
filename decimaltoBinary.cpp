#include<iostream>
using namespace std;
void decToBinary(int n)
{
int j=0;
while(j<=n)
{
    for(int i=8;i>=0;i--)
    {
        int k=j >> i;
        
        if(k & 1)
            cout<< "1";
        
        else
            cout<< "0";
        

    }
    cout<<endl;
    j++;

}
}
int main()
{
    int n=10;
    
    decToBinary(n);
    cout<<endl;

}


