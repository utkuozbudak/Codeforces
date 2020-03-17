#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int n,max = 1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int curr = 1;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i] <=arr[i+1])
        {
            curr++;
            if(curr >= max) max = curr;
        }
        if(arr[i] > arr[i+1]) curr = 1;
        
    }
    
    cout<<max;
    
    return 0;
}
