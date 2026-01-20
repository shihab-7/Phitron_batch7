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
        sort(v.begin(),v.end());
        ll res=0;
        for(int i=0;i<n;i++)
        {
            ll x=-v[i];
            set<ll>s;
            for(int j=0;j<n;j++) s.insert(v[j]+x);
            ll mex=0;
            while(s.find(mex)!=s.end()) mex++;
            res=max(res,mex);
        }
        cout<<res<<endl;
    }
    return 0;
}