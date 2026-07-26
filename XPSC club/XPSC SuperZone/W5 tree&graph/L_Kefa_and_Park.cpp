#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

int n,m,cnt=0;
vector<int>a;
vector<vector<int>>grf;

void dfs(int v,int p,int k)
{
    if(k>m) return;
    bool f=true;
    for(auto &u:grf[v])
    {
        if(u!=p)
        {
            f=false;
            dfs(u,v,k*a[u]+a[u]);
        }
    }
    if(f) cnt++;
}

int main()
{
    shihab
    cin>>n>>m;
    a.resize(n);
    for(int i=0;i<n;i++) cin>>a[i];
    grf.resize(n);
    for(int i=0;i<n-1;i++)
    {
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        grf[u].push_back(v);
        grf[v].push_back(u);
    }
    dfs(0,-1,a[0]);
    cout<<cnt<<endl;
    return 0;
}