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
        int n,k;
        cin>>n>>k;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            mp[val]++;
        }
        int ans=0;
        if(k==0) ans=mp[0];
        else
        {
            int cnt=0;
            for(int i=0;i<k;i++)
            {
                if(mp[i]==0) cnt++;
            }
            ans=max(mp[k],cnt);
        }
        cout<<ans<<endl;
    }
    return 0;
}