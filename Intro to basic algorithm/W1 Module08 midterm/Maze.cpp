#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<pair<int,int>>d={{0,1},{0,-1},{-1,0},{1,0}};
bool vis[1003][1003];
pair<int,int>parent[1003][1003];
bool valid(int i,int j)
{
    if(i<0 || i>=n || j<0 || j>=m) return false;
    return true;
}
void bfs(int si, int sj, vector<string>&g)
{
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;
    parent[si][sj]={-1,-1};

    while(!q.empty())
    {
        auto par=q.front();
        q.pop();
        int pi=par.first;
        int pj=par.second;
        for(int k=0;k<4;k++)
        {
            int ci=pi+d[k].first;
            int cj=pj+d[k].second;
            if(valid(ci,cj)&& !vis[ci][cj]&& g[ci][cj]!='#')
            {
                q.push({ci,cj});
                vis[ci][cj]=true;
                parent[ci][cj]={pi,pj};
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    vector<string>g(n);
    for(int i=0;i<n;i++) cin>>g[i];

    memset(vis,false,sizeof(vis));
    for(int i=0;i<1003;i++)
    {
        for(int j=0;j<1003;j++)
        {
            parent[i][j]={-1,-1};
        }
    }

    int si,sj,di,dj;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(g[i][j]=='R')
            {
                si=i,sj=j;
            }
            else if(g[i][j]=='D')
            {
                di=i,dj=j;
            }
        }
    }
    bfs(si,sj,g);
    if(vis[di][dj])
    {
        int x=di,y=dj;
        while(1)
        {
            if(x==si && y==sj) break;
            pair<int,int> par=parent[x][y];
            if(g[x][y]=='.')g[x][y]='X';
            x=par.first;
            y=par.second;
        }
    }
    for(int i=0;i<n;i++) cout<<g[i]<<endl;
    return 0;
}