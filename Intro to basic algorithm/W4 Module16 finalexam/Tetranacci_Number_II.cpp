#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n;
    cin>>n;
    ll tetr[n+1];
    tetr[0]=0;
    tetr[1]=1;
    tetr[2]=1;
    tetr[3]=2;
    for(ll i=4;i<=n;i++) tetr[i]=tetr[i-1]+tetr[i-2]+tetr[i-3]+tetr[i-4];
    cout<<tetr[n];
    return 0;
}