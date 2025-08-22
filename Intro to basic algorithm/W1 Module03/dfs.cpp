#include<bits/stdc++.h>
using namespace std;

vector<int>adj_mat[1005];
bool visited[1005];

void dfs(int src)
{
    cout<<src<<" ";
    visited[src]=true;
    for(int child: adj_mat[src])
    {
        if(!visited[child])
        {
            dfs(child);
        }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        
        adj_mat[a].push_back(b);
        adj_mat[b].push_back(a);
    }
    memset(visited,false,sizeof(visited));
    dfs(0);

    return 0;
}