#include "string"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    string s;
    cin>>s;
    int count = 0;
    
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)>64 && s.at(i)<91) count++;
    }
    
    if(count > (s.length()-count))
    {
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)>96 && s.at(i) < 123) s[i] -= 32;
        }
    }
    
    if(count <= (s.length()-count))
    {
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)>64 && s.at(i) < 91) s[i] += 32;
        }
    }
    
    cout<<s;
    return 0;
}
