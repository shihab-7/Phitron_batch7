#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

int main()
{
    shihab
    ll k,n;
    cin>>k>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];

    auto ok=[&](ll m)
    {
        ll ttl=0;
        for(ll x:v) ttl+=min(x,m);
        return ttl>=m*k;
    };
    ll sum=0;
    for(ll x:v) sum+=x;

    ll l=0,r=sum/k+1,mid;
    while(l+1<r)
    {
        mid=l+(r-l)/2;
        if(ok(mid)) l=mid;
        else r=mid;
    }
    cout<<l<<endl;
    return 0;
}