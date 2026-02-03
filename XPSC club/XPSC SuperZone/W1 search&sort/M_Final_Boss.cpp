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
        ll h,n;
        cin>>h>>n;
        vector<ll>v(n),c(n);
        for(int i=0;i<n;i++) cin>>v[i];
        for(int i=0;i<n;i++) cin>>c[i];

        auto ok=[&](ll m,ll n,ll h,vector<ll>&v,vector<ll>&c)
        {
            ll cnt=0;
            for(int i=0;i<n;i++)
            {
                cnt=min(cnt+(1+(m-1)/c[i])*v[i],h);
            }
            return cnt>=h;
        };

        ll l=0,r=1e12;
        while(l+1<r)
        {
            ll mid=l+(r-l)/2;
            if(ok(mid,n,h,v,c)) r=mid;
            else l=mid;
        }
        cout<<r<<endl;
    }
    return 0;
}