
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

void m(int num)
{
    int rem=0,rev=0;
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    int result=0,rem2=0;
    while(rev>0)
    {
        rem2=rev%10;
        result=(rem2*rem2);
        cout<<result;
        rev/=10;
    }
    
}

int main()
{
    int num=134;
    m(num);
}


// int encodeNumber(int N) {
//     string result = "";
//     string num_str = to_string(N);
    
//     for(char digit : num_str) {
//         int d = digit - '0';  // Convert character to integer
//         int square = d * d;   // Square the digit
//         result += to_string(square);  // Append the square to the result string
//     }
    
//     // Convert the concatenated string back to an integer
//     return stoi(result);
// }