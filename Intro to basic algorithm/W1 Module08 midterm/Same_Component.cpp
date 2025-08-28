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
void dfs(int i, int j, vector<string>&g)
{
    vis[i][j]=true;
    for(auto v:d)
    {
        int x = i + v.first;
        int y = j + v.second;
        if(valid(x,y)&& !vis[x][y] && g[x][y]=='.')
        {
            dfs(x,y,g);
        }
    }
}

int main()
{
    cin>>n>>m;
    vector<string>g(n);
    for(int i=0;i<n;i++) cin>>g[i];
    int si, sj, di, dj;
    cin>>si>>sj;
    cin>>di>>dj;
    
    memset(vis,false,sizeof(vis));
    if(g[si][sj]=='.' && g[di][dj]=='.')
    {
        dfs(si,sj,g);
        if(vis[di][dj]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}