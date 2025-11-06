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
        int n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        ll ans=-1, G=v[0];
        for(int i=1;i<n;i++) G=gcd(G,v[i]);
        for(ll x=2;x<=1e18;x++)
        {
            if(gcd(x,G)==1)
            {
                ans=x;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}