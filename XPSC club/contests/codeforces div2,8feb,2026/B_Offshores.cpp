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
    test
    {
        ll n,x,y;
        cin>>n>>x>>y;
        vector<ll>v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        ll sum=0,ans=0;
        vector<ll>tmp(n);
        for(int i=0;i<n;i++)
        {
            tmp[i]=(v[i]/x)*y;
            sum+=tmp[i];
        }
        for(int i=0;i<n;i++)
        {
            ll cur_mny=v[i]+(sum-tmp[i]);
            ans=max(ans,cur_mny);
        }
        cout<<ans<<endl;
    }
    return 0;
}