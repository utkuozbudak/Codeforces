#include <iostream>
using namespace std;


int main(int argc, const char * argv[])
{
    long long n;
    cin>>n;
    
    if(n%2==0) cout<<n/2;
    else cout<< -1*(n/2+1);

    return 0;
}
