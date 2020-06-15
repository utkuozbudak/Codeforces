#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    
    int count = 0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i] == arr[i+1]) continue;
        else count++;
    }
    cout<<count+1;
    return 0;
}
