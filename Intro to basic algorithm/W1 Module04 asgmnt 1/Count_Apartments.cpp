#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<string>grid(1005);
bool vis[1005][1005];
vector<pair<int,int>>direc={{1,0},{-1,0},{0,1},{0,-1}};
bool isValid(int i,int j)
{
    return i>=0 && i<n && j>=0 && j<m ;
}
void dfs(int i,int j)
{
    vis[i][j]=true;
    for(auto d:direc)
    {
        int x= i+d.first , y=j+d.second;
        if(isValid(x,y) && !vis[x][y] && grid[x][y]=='.') dfs(x,y);
    }
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>grid[i];
    }

    memset(vis,false,sizeof(vis));
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='.' && !vis[i][j])
            {
                dfs(i,j);
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}