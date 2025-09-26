#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int LargeSmallSum(vector<int> v)
{
    if(v.empty()||v.size()<=3)
    {
        return 0;
    }
    int smallest1 = INT32_MAX, smallest2 = INT32_MAX;
    int greatest1 = INT32_MIN, greatest2 = INT32_MIN;

    
    for (int i = 0; i < v.size(); i++) {
        if (v[i] < smallest1 && i%2!=0) {
            smallest2 = smallest1;  
            smallest1 = v[i];      
        } else if (v[i] < smallest2&& i%2!=0) {
            smallest2 = v[i];      
        }
    }

     for (int i = 0; i < v.size(); i++) {
        if (v[i] > greatest1 && i%2==0) {
            greatest2 = greatest1;  
            greatest1 = v[i];      
        } else if (v[i] < greatest1 && i%2==0) {
            greatest2 = v[i];      
        }
    }

    return smallest2+greatest2;

}

int main()
{
    vector<int> v={3,2,1,7,5,4};
    cout<<LargeSmallSum(v);
    return 0;
}