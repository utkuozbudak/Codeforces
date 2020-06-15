#include "string"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    string s;
    cin>>s;
    bool flag = false;
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i) == 'H'||s.at(i)=='Q'||s.at(i)=='9') flag = true;
    }
    
    if(flag) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}
