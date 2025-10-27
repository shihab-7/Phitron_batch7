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
        map<char,ll>f_mp,s_mp;
        map<string,ll>freq;
        vector<string>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            f_mp[v[i][0]]++;
            s_mp[v[i][1]]++;
            freq[v[i]]++;
        }
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            ll cnt=max(0LL, f_mp[v[i][0]]-freq[v[i]]);
            ans+=cnt;
            cnt=max(0LL, s_mp[v[i][1]]-freq[v[i]]);
            ans+=cnt;
            if(f_mp[v[i][0]]>0) f_mp[v[i][0]]--;
            if(s_mp[v[i][1]]>0) s_mp[v[i][1]]--;
            if(freq[v[i]]>0) freq[v[i]]--;
        }
        cout<<ans<<endl;
    }
    return 0;
}