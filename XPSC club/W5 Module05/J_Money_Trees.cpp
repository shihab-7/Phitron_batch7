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
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n+1),h(n+1),pfs(n+1);
        pfs[0]=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            pfs[i]=pfs[i-1]+a[i];
        }
        for(int i=1;i<=n;i++) cin>>h[i];
        ll l=1,r=1,mx=0;
        while(r<=n)
        {
            // cout<<h[r-1]%h[r]<<endl;
            if(h[r-1]%h[r])l=r;
            while(pfs[r]-pfs[l-1]>k)l++;
            mx=max(mx,r-l+1);
            r++;
        }
        cout<<mx<<endl;
    }
    return 0;
}