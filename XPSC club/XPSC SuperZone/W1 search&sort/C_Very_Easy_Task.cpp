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
    ll n,x,y;
    cin>>n>>x>>y;

    if(n==1) cout<<min(x,y)<<endl;
    else
    {
        auto ok=[&](ll m)
        {
            return (m/x)+(m/y)>=n-1;
        };
        ll l=0,r=1e18,mid;
        while(l+1<r)
        {
            mid=l+(r-l)/2;
            if(ok(mid)) r=mid;
            else l=mid;
        }
        cout<<r+min(x,y)<<endl;
    }
    return 0;
}