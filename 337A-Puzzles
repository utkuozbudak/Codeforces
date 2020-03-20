#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[])
{
    int n,m;
    cin >> n >> m;
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+m);
    int min = arr[m-1] - arr[0];
    
    for(int i=0;i<m-n+1;i++)
    {
        if(abs(arr[i]-arr[i+n-1]) < min) min = abs(arr[i] - arr[i+n-1]);
    }

    cout<<min;
    return 0;
}
