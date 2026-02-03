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
        vector<ll>v(k);
        for(int i=0;i<k;i++) cin>>v[i];
        sort(v.begin(),v.end());
        ll ans=0,time=0;
        for(int i=k-1;i>=0;i--)
        {
            ll need=n-v[i];
            if(need+time<n)
            {
                ans++;
                time+=need;
            }
            else break;
        }
        cout<<ans<<endl;
    }
    return 0;
}