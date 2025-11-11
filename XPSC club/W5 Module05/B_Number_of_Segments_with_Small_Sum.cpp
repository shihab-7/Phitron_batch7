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
    ll n,s;
    cin>>n>>s;
    vector<ll>v(n);
    for(ll &a:v) cin>>a;
    ll sum=0,ans=0;
    ll l=0,r=0;
    while(r<n)
    {
        sum+=v[r];
        if(sum<=s) ans+=(r-l+1);
        else
        {
            while(sum>s)
            {
                sum-=v[l];
                l++;
            }
            if(sum<=s) ans+=(r-l+1);
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}