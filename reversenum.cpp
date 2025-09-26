#include<iostream>
using namespace std;
int reverse(int num)
{
  int rev=0 ,rem;
  
  while(num!=0)
  {
    rem=num%10;
    rev=rev*10+rem;
    num/=10;
  }
return (rev < INT32_MIN || rev > INT32_MAX) ? 0 : rev;
}
int main()
{
    int num=3459999999;
    cout<<reverse(num);

}