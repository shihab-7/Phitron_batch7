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
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        mp[a]++;
        mp[b+1]--;
    }
    int cnt=0,ans=0;
    for(auto [f,s]:mp)
    {
        cnt+=s;
        ans=max(ans,cnt);
    }
    cout<<ans<<endl;
    return 0;
}