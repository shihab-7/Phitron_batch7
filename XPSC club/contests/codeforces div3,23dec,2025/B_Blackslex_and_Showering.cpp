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
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        ll sm=0;
        for(int i=0;i<n-1;i++) sm+=abs(v[i]-v[i+1]);
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            ll cur=0;
            if(i>0) cur+=abs(v[i]-v[i-1]);
            if(i<n-1) cur+=abs(v[i]-v[i+1]);
            if(i>0 && i<n-1) cur-=abs(v[i-1]-v[i+1]);
            ans=max(ans,cur);
        }
        cout<<sm-ans<<endl;
    }
    return 0;
}