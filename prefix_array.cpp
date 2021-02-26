//C++ program to find prefix array.
#include<bits/stdc++.h>
using namespace std;

int prefixSum(int arr[],int n,int P[])
{
    P[0] = arr[0];

    for(int i=1;i<n;i++)
    {
        P[i] = P[i-1] + arr[i];
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int P[n];
    prefixSum(arr,n,P);
    for(int i=0;i<n;i++)
        cout<<P[i];
}
