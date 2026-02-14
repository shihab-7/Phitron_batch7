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
        vector<ll>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        vector<ll>prf_mx(n),sufx(n+1);
        prf_mx=v;
        for(int i=1;i<n;i++) prf_mx[i]=max(prf_mx[i-1],prf_mx[i]);
        for(int i=n-1;i>=0;i--) sufx[i]=sufx[i+1]+v[i];

        cout<<prf_mx[n-1]<<" ";
        for(int i=2;i<=n;i++)
        {
            ll sum1=sufx[n-i];
            ll sum2=prf_mx[n-i]+sufx[n-i+1];
            cout<<max(sum1,sum2)<<" ";
        }
        cout<<endl;
    }
    return 0;
}