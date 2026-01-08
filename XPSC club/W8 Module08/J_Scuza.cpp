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
        int n,q;
        cin>>n>>q;
        vector<ll>v(n+1),prf(n+1);
        v[0]=0;
        prf[0]=0;
        for(int i=1;i<=n;i++)
        {
            ll a;
            cin>>a;
            v[i]=max(v[i-1],a);
            prf[i]=prf[i-1]+a;
        }
        while(q--)
        {
            ll op;
            cin>>op;
            int idx=upper_bound(v.begin(),v.end(),op)-v.begin()-1;
            cout<<prf[idx]<<" ";
        }
        cout<<endl;
    }
    return 0;
}