#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

vector<ll>a;
vector<vector<ll>>grf;
int n;
ll dfs(ll v, ll p)
{
    ll cnt=0;
    bool f=true;
    for(auto u:grf[v])
    {
        if(u!=p)
        {
            f=false;
            cnt+=dfs(u,v);
        }
    }
    if(f) cnt=1;
    return a[v]=cnt;
}

int main()
{
    shihab
    test
    {
        cin>>n;
        grf.assign(n,{});
        a.assign(n,0);
        for(int i=0; i<n-1; i++)
        {
            int u,v;
            cin>>u>>v;
            u--;
            v--;
            grf[u].push_back(v);
            grf[v].push_back(u);
        }
        dfs(0,-1);
        int q;
        cin>>q;
        while(q--)
        {
            int x,y;
            cin>>x>>y;
            cout<<(ll)a[x-1]*a[y-1]<<endl;
        }
    }
    return 0;
}