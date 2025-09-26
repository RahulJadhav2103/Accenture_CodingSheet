#include<iostream>
#include<string>
using namespace std;
void longest(string s,string  &min_word,string &max_word)
{ 
    int i=0,j=0;
    int min_index=0;
    int max_index;
    int min_length=s.size();
    int max_length=0;
    while(j<=s.size())
    {
        if(s[j]==' '||s[j]=='\0')
        {
            int cur_len=j-i;
            if(cur_len<min_length)
            {
                min_length=cur_len;
                min_index=i;
            }
            if(cur_len>max_length)
            {
                max_length=cur_len;
                max_index=i;
            }
            j++;
            i=j;

        }
        else
        {
            j++;
        }
 
    }
    min_word=s.substr(min_index,min_length);
    max_word=s.substr(max_index,max_length);
    
    
}
int main()
{
    string s,min_word,max_word;
    getline(cin,s);
        longest(s,min_word,max_word);
        cout << "Minimum length word: "
        << min_word << endl;
        cout << "Maximum length word: "
        << max_word << endl;
}