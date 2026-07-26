#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long


const int N=3e5+9;
string s;
vector<int>g[N], opt(N);

void dfs(int u)
{
    if(g[u][0]!=0)
    {
        int v=g[u][0];
        if(s[u-1]!='L') opt[v]=opt[u]+1;
        else opt[v]=opt[u];
        dfs(v);
    }
    if(g[u][1]!=0)
    {
        int v=g[u][1];
        if(s[u-1]!='R') opt[v]=opt[u]+1;
        else opt[v]=opt[u];
        dfs(v);
    }
}

int main()
{
    shihab
    test
    {
        int n;
        cin>>n;
        for(int i=0;i<=n;i++)
        {
            g[i].clear();
            opt[i]=0;
        }
        cin>>s;

        for(int i=1;i<=n;i++)
        {
            int l,r;
            cin>>l>>r;
            g[i].push_back(l);
            g[i].push_back(r);
        }
        dfs(1);
        int ans=INT_MAX;
        for(int i=1;i<=n;i++)
        {
            if(g[i][0]==0&& g[i][1]==0) ans=min(ans,opt[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}