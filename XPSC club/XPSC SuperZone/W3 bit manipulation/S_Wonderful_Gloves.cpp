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
    auto cmp=[&](pair<ll,ll>&a,pair<ll,ll>&b)
    {
        return a.second>b.second;
    };
    test
    {
        ll n,k;
        cin>>n>>k;
        vector<pair<ll,ll>>v(n);
        for(int i=0;i<n;i++) cin>>v[i].first;
        for(int i=0;i<n;i++) cin>>v[i].second;
        for(int i=0;i<n;i++)
        {
            if(v[i].first<v[i].second) swap(v[i].first,v[i].second);
        }
        ll ans=1;
        for(int i=0;i<n;i++) ans+=v[i].first;
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<k-1;i++) ans+=v[i].second;
        cout<<ans<<endl;
    }
    return 0;
}