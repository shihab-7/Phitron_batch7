#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

const int mod=1e9+7;
ll power(ll x,ll n)
{
    ll ans=1 % mod;
    while(n)
    {
        if(n&1) ans=(ans%mod*x%mod)%mod;
        x=x*x%mod;
        n>>=1;
    }
    return ans;
}
int main()
{
    shihab
    int n;
    cin>>n;
    while(n--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<power(a,b)<<endl;
    }
    return 0;
}