#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

ll n,m;
ll arr[1005][1005];
ll x[4]={0,0,1,-1};
ll y[4]={1,-1,0,0};

ll dfs(ll i,ll j)
{
    ll s=arr[i][j];
    arr[i][j]=0;
    for(int k=0;k<4;k++)
    {
        int u=i+x[k];
        int v=j+y[k];
        if(u>0&& v>0 &&u<=n&&v<=m&& arr[u][v]>0)
        {
            s+=dfs(u,v);
        }
    }
    return s;
}

int main()
{
    shihab
    test
    {
        cin>>n>>m;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
            {
                cin>>arr[i][j];
            }
        }
        ll ans=0;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
            {
                if(arr[i][j]>0)
                {
                    ans=max(ans, dfs(i,j));
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}