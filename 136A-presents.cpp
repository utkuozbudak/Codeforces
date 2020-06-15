#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int n;
    cin>>n;
    int arr[n],res[n];
    for(int i=1;i<n+1;i++)
    {
        cin>>arr[i];
    }
    int tmp = 1;
    while(true)
    {
        if(tmp == n+1) break;
        int a = arr[tmp];
        res[a] = tmp;
        tmp++;
    }
    
    for(int i=1;i<n+1;i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}
