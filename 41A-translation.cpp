#include "string"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    string s,s2;
    cin >> s;
    cin >> s2;
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i] != s2[s.length()-1-i])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
