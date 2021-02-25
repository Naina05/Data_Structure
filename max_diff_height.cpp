#include<bits/stdc++.h>
using namespace std;

int getMIN(int arr[],int n , int k)
{
    if(n==1)
        return 0;
    sort(arr,arr+n);
    int diff=arr[n-1]-arr[0];
    int minimum = arr[0] + k;
    int maximum = arr[n-1] + k;
    int temp = 0;
    if(minimum>maximum){
        temp = minimum;
        minimum = maximum;
        maximum = temp;

    }
    for(int i=1;i<n-1;i++)
    {
        int sub = arr[i] - k;
        int add = arr[i] + k;
        if(sub>=minimum || add<=maximum)
            continue;
        if(maximum - sub <= add-minimum)
            minimum = sub;
        else
            maximum = add;
    }
    return min(diff,maximum - minimum);
}

int main()
{
    int arr[] = {1,5,15,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int maximum_diff = getMIN(arr,n,k);
    cout<<maximum_diff;
}
