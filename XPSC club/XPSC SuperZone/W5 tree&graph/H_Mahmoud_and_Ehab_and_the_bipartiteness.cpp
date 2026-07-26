#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

ll n,p,q;
vector<vector<ll>>grf;
bool vis[100009];

void dfs(int v, int pos)
{
    if(pos) p++;
    else q++;
    vis[v]=true;
    for(auto u:grf[v])
    {
        if(!vis[u])
        {
            vis[u]=true;
            dfs(u, !pos);
        }
    }
}

int main()
{
    shihab
    cin>>n;
    grf.assign(n,{});
    for(int i=0; i<n-1; i++)
    {
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        grf[u].push_back(v);
        grf[v].push_back(u);
    }
    dfs(1,0);
    if(n==1) cout<<0<<endl;
    else cout<<p*q-(n-1)<<endl;
    return 0;
}