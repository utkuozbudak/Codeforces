#include <iostream>
#include "string"
using namespace std;

int main(int argc, const char * argv[])
{
    string s;
    cin>>s;
    bool flag = false;
    bool f2 = false;
    
    if(s.length()==1)
    {
        if(s.at(0) >96 && s.at(0) <123)
        {
            s[0] -= 32;
            cout<<s;
            return 0;
        }
        else
        {
            s[0] += 32;
            cout<<s;
            return 0;
        }
    }
    for(int i=1;i<s.length();i++)
    {
      if(s.at(0) > 64 && s.at(0) <91)
      {
          if(s.at(i)>64&&s.at(i)<91) flag = true;
          else
          {
              cout<<s;
              return 0;
          }
      }
      if(s.at(0) > 96 && s.at(0) < 123)
      {
          if(s.at(i) > 64 && s.at(i)<91) f2=true;
          else
          {
              cout<<s;
              return 0;
          }
      }
    }
    
    if(flag)
    {
        for(int i=0;i<s.length();i++)
        {
            s[i] += 32;
        }
    }
    
    if(f2)
    {
        s[0]  -= 32;
        for(int i=1;i<s.length();i++)
        {
            s[i] += 32;
        }
    }
    cout<<s;
   
    return 0;
}
