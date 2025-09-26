#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool valid(string password)
{
   int n=password.length();
   if(n<4)
   {
    return 0;
   }
   int num=0;
 
   for(int i=0;i<n;i++)
   {
       if(!isupper(password[i]) && i==0)
       {
        return false;
       }
        if(password[i]-'0'>=0 && password[i]-'9'<=9)
        {
            num++;
        }
        if(isspace(password[i]) || password[i]== '/')
        {
            return false;
        }
         
    }
    return num>0 ;
}
int main()
{
    string password="ahul9";
    
    if(valid(password))
    {
        cout<<"valid";
    }
    else{
        cout<<"not valid";
    }

}