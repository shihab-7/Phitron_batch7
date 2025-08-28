#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<pair<int,int>>d={{0,1},{1,0},{-1,0},{0,-1}};
bool vis[1003][1003];
bool valid(int i,int j)
{
    if(i<0 || i>=n || j<0 || j>=m) return false;
    return true;
}
int dfs(int i, int j, vector<string>&g)
{
    int cnt=1;
    vis[i][j]=true;
    for(auto v:d)
    {
        int x = i + v.first;
        int y = j + v.second;
        if(valid(x,y)&& !vis[x][y] && g[x][y]=='.')
        {
            cnt+=dfs(x,y,g);
        }
    }
    return cnt;
}

int main()
{
    cin>>n>>m;
    vector<string>g(n);
    for(int i=0;i<n;i++) cin>>g[i];
    memset(vis,false,sizeof(vis));
    int mn_area=INT_MAX;
    bool flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!vis[i][j]&&g[i][j]=='.')
            {
                int ar=dfs(i,j,g);
                mn_area=min(mn_area,ar);
                flag=1;
            }
        }
    }
    if(flag) cout<<mn_area<<endl;
    else cout<<-1<<endl;
    return 0;
}