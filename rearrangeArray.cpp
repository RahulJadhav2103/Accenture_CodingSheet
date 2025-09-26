#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rearrange(vector<int>& vc)
{
    vector<int> result(vc.size());
    int posidx=0, negidx=1;
    for(int i=0;i<vc.size();i++)
    {
        if(vc[i]>0)
        {
            result[posidx]=vc[i];
            posidx+=2;
        }
        else
        {
            result[negidx]=vc[i];
            negidx+=2;
        }
    }
    vc=result;
}
int main()
{
    vector<int> vc={3,1,-2,-5,2,-4};
    rearrange(vc);
      for(int i = 0; i < vc.size(); i++) {
        cout << vc[i] << " ";
    }

    return 0;
}