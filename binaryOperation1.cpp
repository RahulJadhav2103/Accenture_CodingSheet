#include<iostream>
using namespace std;
int binop(char* str)
{
    int result=*str-'0';
    str++; 
    while(*str!='\0')
    {
        char p=*str;
        str++;
        if(p=='A')
        {
            result&=(*str-'0');
        }
        else if(p=='B')
        {
            result|=(*str-'0');
        }
        else
        {
            result^=(*str-'0');
        }
        str++;
    }
  return result;
}
int main()
{
    string str="0A1B1B1B1";
    char* s=&str[0];
    cout<<binop(s);
    return 0;
}