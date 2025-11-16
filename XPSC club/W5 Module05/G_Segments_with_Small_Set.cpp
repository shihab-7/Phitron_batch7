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
    ll ans=0;
    int l=0,r=0;
    map<int,int>mp;
    while(r<n)
    {
        mp[v[r]]++;
        if(mp.size()<=k) ans+=(r-l+1);
        else
        {
            while(mp.size()>k&& l<=r)
            {
                mp[v[l]]--;
                if(mp[v[l]]==0)mp.erase(v[l]);
                l++;
            }
            if(mp.size()<=k) ans+=(r-l+1);
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}