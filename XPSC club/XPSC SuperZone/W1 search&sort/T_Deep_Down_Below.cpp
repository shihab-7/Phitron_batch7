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
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            ll need=0;
            for(int j=0;j<k;j++)
            {
                ll a;
                cin>>a;
                need=max(need,a-j);
            }
            v.push_back({need+1,k});
        }
        sort(v.begin(),v.end());

        auto ok=[&](ll mid)
        {
            ll cur=mid;
            for(auto [x,y]:v)
            {
                if(cur<x) return false;
                cur+=y;
            }
            return true;
        };

        ll l=1,r=1e18,ans,mid;
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
    }
    return 0;
}