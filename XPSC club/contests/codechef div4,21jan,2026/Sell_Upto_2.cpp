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
        vector<ll>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        ll ans=0;
        multiset<ll,greater<ll>>ms;
        for(int i=n-1;i>=0;i--)
        {
            ms.insert(v[i]);
            ms.insert(v[i]);
            ll mx=*ms.begin();
            ans+=mx;
            ms.erase(ms.begin());
        }
        cout<<ans<<endl;
    }
    return 0;
}