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
        ll n,x;
        cin>>n>>x;
        vector<ll>v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        auto ok=[&](ll m)
        {
            ll sum=0;
            for(int i=0;i<n;i++)
            {
                sum+=max(m-v[i],0LL);
            }
            return sum<=x;
        };
        ll l=1,r=1e12,ans,mid;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(ok(mid))
            {
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}