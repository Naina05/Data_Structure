#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

long long BinaryExp(ll base,ll power)
{
    ll res =1;
    while(power>0)
    {
        if(power&1){
            res *= base;
            power--;
        }
        base *= base;
        power /= 2;
    }
    return res;
}
int main()
{
    ll base,power;
    cout<<BinaryExp(2,10);
    return 0;
}
