#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int l,b,year = 0;
    cin >> l >> b;
    
    while(l<=b)
    {
        l *= 3;
        b *= 2;
        year++;
    }
    cout<<year;
    
    return 0;
}
