#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

ll sum(ll x)
{
    return (x*(x+1))/2;
}

int main()
{
    shihab
    test
    {
        ll n,m;
        cin>>n>>m;
        vector<ll>a(n+1),b(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++) cin>>b[i];

        ll f1=1,fm=m;
        for(int i=1;i<=n;i++)
        {
            f1=max(a[i],f1+b[i]);
            fm=max(a[i],fm+b[i]);
        }
        ll k=fm-f1;
        ll ans=f1*(m-k);
        ans+=(sum(fm)-sum(f1));
        cout<<ans<<endl;
    }
    return 0;
}