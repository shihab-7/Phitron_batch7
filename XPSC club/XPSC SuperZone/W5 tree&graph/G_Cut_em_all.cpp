#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

vector<vector<int>>grf;

int dfs(int v, int p, int &cnt)
{
    int s=1;
    for(auto u:grf[v])
    {
        if(u!=p) s+=dfs(u,v,cnt);
    }
    if(s%2==0)
    {
        cnt++;
        s=0;
    }
    return s;
}

int main()
{
    shihab
    int n;
    cin>>n;
    grf.assign(n+1,{});
    for(int i=0;i<n-1;i++)
    {
        int u,v;
        cin>>u>>v;
        grf[u].push_back(v);
        grf[v].push_back(u);
    }
    if(n%2==1) cout<<-1;
    else
    {
        int cnt=0;
        dfs(1,0,cnt);
        cout<<cnt-1;
    }
    cout<<endl;
    return 0;
}