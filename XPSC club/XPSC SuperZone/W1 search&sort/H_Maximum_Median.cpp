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
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    sort(v.begin(),v.end());

    auto ok=[&](ll median)
    {
        ll cnt=0;
        for(int i=n/2;i<n;i++)
        {
            if(v[i]<median)
            {
                cnt+=median-v[i];
            }
            else cnt+=0;
        }
        return cnt<=k;
    };

    ll l=1,r=2e9,mid,ans;
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
    return 0;
}