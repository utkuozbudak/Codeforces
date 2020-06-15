#include <iostream>
#include "string"
using namespace std;

int main(int argc, const char * argv[])
{
    int n;
    cin>>n;
    string s = to_string(n);
    bool flag = true;
    
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)== '4' || s.at(i) == '7') continue;
        else flag = false;
    }
    
    if(!flag)
    {
        if(n%4 == 0 || n%7 == 0 || n%47 == 0 || n%74 == 0) flag = true;
    }
    
    if(flag) cout<<"YES";
    else cout<< "NO";

    return 0;
}
