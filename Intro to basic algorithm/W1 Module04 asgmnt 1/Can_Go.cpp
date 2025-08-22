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
void bfs(pair<int,int>src, pair<int,int> dst)
{
    queue<pair<int,int>>q;
    q.push(src);
    vis[src.first][src.second]=true;

    while(!q.empty())
    {
        pair<int,int>p =q.front();
        q.pop();

        if( p == dst)
        {
            cout<<"YES"<<endl;
            return;
        }
        for(auto d : direc)
        {
            int x=p.first + d.first;
            int y=p.second + d.second;
            if(isValid(x,y) && !vis[x][y] && (grid[x][y]=='.' || grid[x][y]=='B'))
            {
                q.push({x,y});
                vis[x][y]=true;
            }
        }
    }
    cout<<"NO"<<endl;
}

int main()
{
    cin>>n>>m;
    pair<int,int>src,dst;

    for(int i=0;i<n;i++)
    {
        cin>>grid[i];
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='A') src={i,j};
            if(grid[i][j]=='B') dst={i,j};
        }
    }
    memset(vis,false,sizeof(vis));
    bfs(src,dst);
    return 0;
}