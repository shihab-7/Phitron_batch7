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
        vector<ll>v(n+1),prf_sm(n+1);
        v[0]=0;
        prf_sm[0]=0;
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
            prf_sm[i]=prf_sm[i-1]+v[i];
        }
        while(q--)
        {
            ll l,r,k;
            cin>>l>>r>>k;
            ll updt_sm =prf_sm[n]-(prf_sm[r]-prf_sm[l-1])+(r-l+1)*k;
            if(updt_sm%2==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}