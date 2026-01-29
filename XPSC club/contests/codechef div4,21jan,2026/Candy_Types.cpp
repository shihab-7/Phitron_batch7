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
        map<int,int>mp;
        for(int i=0;i<n;i++) mp[v[i]]++;
        int mx_f=0,ans=0;
        for(auto [x,y]:mp)
        {
            if(y>mx_f)
            {
                mx_f=y;
                ans=x;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}