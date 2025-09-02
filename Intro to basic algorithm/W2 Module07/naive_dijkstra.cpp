#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>>adj_lst[10005];
int dist[10005];

void dijkstra(int src)
{
    queue<pair<int,int>>q;
    q.push({src,0});

    dist[src]=0;
    while(!q.empty())
    {
        pair<int,int>par=q.front();
        q.pop();
        int p_node=par.first;
        int p_dist=par.second;

        for(auto child:adj_lst[p_node])
        {
            int c_node=child.first;
            int c_dist=child.second;
            if(p_dist+c_dist < dist[c_node])
            {
                dist[c_node]=p_dist+c_dist;
                q.push({c_node,dist[c_node]});
            }
        }
    }
}


int main()
{

    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        adj_lst[a].push_back({b,w});
        adj_lst[b].push_back({a,w});
    }

    for(int i=0;i<10005;i++) dist[i]=INT_MAX;
    dijkstra(0);
    for(int i=0;i<n;i++) cout<<i<<" -> "<<dist[i]<<endl;

    return 0;
}