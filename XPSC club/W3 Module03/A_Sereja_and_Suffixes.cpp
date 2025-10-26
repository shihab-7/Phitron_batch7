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
    int n,m;
    cin>>n>>m;
    vector<int>v(n+1),ans(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];
    set<int>s;
    for(int i=n;i>=1;i--)
    {
        s.insert(v[i]);
        ans[i]=s.size();
    }
    while(m--)
    {
        int l;
        cin>>l;
        cout<<ans[l]<<endl;
    }
    return 0;
}