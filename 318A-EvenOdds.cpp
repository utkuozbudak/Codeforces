#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    long long n,k;
    cin>> n >> k;
    
    if(n%2==0)
    {
        if(k<=n/2)
        {
            cout<<2*k-1;
        }
        else
        {
            k=k-n/2;
            cout<<2*k;
        }
    }
    else
    {
        if(k<=(n/2)+1)
        {
            cout<<2*k-1;
        }
        else
        {
            k=k-(n/2)-1;
            cout<<2*k;
        }
    }
    return 0;
}
