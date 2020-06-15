#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int n;
    cin>>n;
    int cap[n],curr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>curr[i]>>cap[i];
    }
    int count = 0;
    for(int i=0;i<n;i++)
    {
        int tmp = cap[i] - curr[i];
        if(tmp >= 2) count++;
    }
    cout<<count;
    
    return 0;
}
