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
    int n,t;
    cin>>n>>t;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    auto ok=[&](ll scnds)
    {
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            cnt+=(scnds/v[i]);
            if(cnt>=t) return true;
        }
        return false;
    };

    ll l=1, r=1e18,mid,ans;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(ok(mid))
        {
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<endl;
    return 0;
}