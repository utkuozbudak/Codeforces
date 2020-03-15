#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main(int argc, const char * argv[])
{
    int n,sum = 0;;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n, greater<int>());
    
    int ones = 0, twos = 0, threes = 0,fours = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 4) fours++;
        else
        {
            for(int j=i; j<n;j++)
            {
                if(arr[j]==3) threes++;
                if(arr[j]==2) twos++;
                if(arr[j]==1) ones++;
            }
            break;
        }
    }
    sum = fours + threes+ twos / 2;
    ones -= threes;
    if(twos%2==1)
    {
        sum +=1;
        ones -=2;
    }
    if(ones > 0)
    {
        sum +=(ones+3)/4;
    }
    cout<<sum;
    return 0;
}
