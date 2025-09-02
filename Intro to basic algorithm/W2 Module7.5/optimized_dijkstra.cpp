#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>>adj_list[10005];
int dist[10005];

class cmp{
public:
    bool operator()(pair<int,int>a,pair<int,int>b)
    {
        return a.second > b.second;
    }
};

void dijkstra(int src)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
    pq.push({src,0});

    dist[src]=0;

    while(!pq.empty())
    {
        pair<int,int> par = pq.top();
        pq.pop();
        int p_node = par.first;
        int p_dist = par.second;
        for(auto child: adj_list[p_node])
        {
            int child_node = child.first;
            int c_dist = child.second;
            if(p_dist + c_dist < dist[child_node])
            {
                dist[child_node] = p_dist+c_dist;
                pq.push({child_node,dist[child_node]});
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

        adj_list[a].push_back({b,w});
        adj_list[b].push_back({a,w});
    }
    for(int i=0;i<10005;i++) dist[i]=INT_MAX;
    dijkstra(0);
    for(int i=0;i<n;i++) cout<<i<<" -> "<<dist[i]<<endl;

    return 0;
}