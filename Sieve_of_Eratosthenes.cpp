//Code to calculate all the prime number for a given value n.
//The time complexity for this code will be O(nlog(logn)).
#include<bits/stdc++.h>
using namespace std;

void Sieve(int n)
{
    int prime[100]={0};
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
    }  
}
}

int main()
{
    int n;
    cin>>n;
    Sieve(n);
    return 0;
}
