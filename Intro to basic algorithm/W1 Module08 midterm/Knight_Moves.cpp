#include<bits/stdc++.h>
using namespace std;

bool vis[105][105];
int lvl[105][105];
vector<pair<int,int>>d={{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};
int n,m;

bool valid(int i,int j)
{
    if(i<0 || i>=n || j<0 || j>=m) return false;
    return true;
}

void bfs(int si,int sj)
{
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;
    lvl[si][sj]=0;

    while(!q.empty())
    {
        auto pos=q.front();
        q.pop();
        int i = pos.first;
        int j = pos.second;

        for(auto val:d)
        {
            int x=i+val.first;
            int y=j+val.second;
            if(valid(x,y)&&!vis[x][y])
            {
                vis[x][y]=true;
                lvl[x][y]=lvl[i][j]+1;
                q.push({x,y});
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int ki,kj,qi,qj;
        cin>>ki>>kj>>qi>>qj;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                vis[i][j]=false;
                lvl[i][j]=0;
            }
        }

        bfs(ki,kj);
        if(!vis[qi][qj]) cout<<-1<<endl;
        else cout<<lvl[qi][qj]<<endl;
    }
    return 0;
}