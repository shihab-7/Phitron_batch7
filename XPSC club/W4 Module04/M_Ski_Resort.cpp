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
        ll n,k,q;
        cin>>n>>k>>q;
        vector<ll>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        ll ans=0,cnt=0;
        int l=0,r=n-1;
        while(l<=r)
        {
            if(v[l]<=q) cnt++;
            else cnt=0;
            if(cnt>=k)ans+=cnt-k+1;
            l++;
        }
        cout<<ans<<endl;
    }
    return 0;
}