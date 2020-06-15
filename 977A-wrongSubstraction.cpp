#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int n,len;
    cin>>n>>len;
    
    for(int i=0;i<len;i++)
    {
        if(n%10 == 0) n = n/10;
        else n-=1;
    }
    cout<<n;
    return 0;
}
