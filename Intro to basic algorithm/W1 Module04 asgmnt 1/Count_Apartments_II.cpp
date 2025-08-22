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
int dfs(int i,int j)
{
    vis[i][j]=true;
    int cnt = 1;
    for(auto d:direc)
    {
        int x= i+d.first , y=j+d.second;
        if(isValid(x,y) && !vis[x][y] && grid[x][y]=='.') 
        {
            cnt+=dfs(x,y);
        }
    }
    return cnt;
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>grid[i];
    }

    memset(vis,false,sizeof(vis));
    vector<int> rooms;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='.' && !vis[i][j])
            {
                int r = dfs(i,j);
                rooms.push_back(r);
            }
        }
    }
    sort(rooms.begin(),rooms.end());
    if(rooms.empty()) cout<<0<<endl;
    else for(int v:rooms) cout<<v<<" ";
    cout<<endl;
    return 0;
}