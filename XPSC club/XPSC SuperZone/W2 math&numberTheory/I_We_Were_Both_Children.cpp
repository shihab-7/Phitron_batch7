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
        ll n;
        cin>>n;
        vector<ll>v(n);
        map<ll,ll>mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]<=n) mp[v[i]]++;
        }
        vector<ll>plc(n+1,0);
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=n;j+=i)
            {
                plc[j]+=mp[i];
            }
        }
        ll ans=0;
        for(int i=1;i<=n;i++) ans=max(ans,plc[i]);
        cout<<ans<<endl;
    }
    return 0;
}