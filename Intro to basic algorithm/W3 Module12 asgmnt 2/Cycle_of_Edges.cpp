#include<bits/stdc++.h>
using namespace std;

int par[100005];
int g_sz[100005];

int find(int node)
{
    if(par[node]==-1) return node;
    int leader = find(par[node]);
    par[node]=leader;
    return leader;
}
void dsu_union(int node1, int node2)
{
    int leader1= find(node1);
    int leader2= find(node2);

    if(g_sz[leader1] >= g_sz[leader2])
    {
        par[leader2]=leader1;
        g_sz[leader1]+=g_sz[leader2];
    }
    else
    {
        par[leader1]=leader2;
        g_sz[leader2]+=g_sz[leader1];
    }
}

int main()
{
    memset(par,-1,sizeof(par));
    memset(g_sz,1,sizeof(g_sz));
    int n,e;
    cin>>n>>e;
    int cnt=0;
    while(e--)
    {
        int a,b;
        cin>>a>>b;

        int leaderA=find(a);
        int leaderB=find(b);

        if(leaderA==leaderB) cnt++;
        else dsu_union(a,b);
    }
    cout<<cnt<<endl;
    return 0;
}