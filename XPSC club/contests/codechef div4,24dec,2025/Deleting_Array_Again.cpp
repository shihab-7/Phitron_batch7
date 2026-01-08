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
        vector<ll>a(n),c(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>c[i];
        
        ll ans=0,mn_c=LLONG_MAX;
        for(int i=0;i<n;i++)
        {
            mn_c=min(mn_c,c[i]);
            // cout<<mn_c<<" "<<a[i]<<endl;
            ans+=(a[i]*mn_c);
        }
        // cout<<endl;
        cout<<ans<<endl;
    }
    return 0;
}