#include <bits/stdc++.h>
using namespace std;

class Edges{
    
    public:
    int a,b,c;
    Edges(int a, int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
};

int n,e;
int dist[1005];
vector<Edges>edge_list;

void bellman()
{
    for(int i=0;i<n-1;i++)
    {
        for(auto ed:edge_list)
        {
            int a,b,c;
            a=ed.a;
            b=ed.b;
            c=ed.c;
            if(dist[a]!=INT_MAX && dist[a]+c<dist[b])
            {
                dist[b]=dist[a]+c;
            }
        }
    }
    bool cycle=false;
    for(auto ed:edge_list)
        {
            int a,b,c;
            a=ed.a;
            b=ed.b;
            c=ed.c;
            if(dist[a]!=INT_MAX && dist[a]+c<dist[b])
            {
                cycle=true;
                break;
            }
        }
    if(cycle) cout<<"negative cycle detected"<<endl;
    else
    {
        for(int i=0;i<n;i++)
        {
            cout<<i<<" -> "<<dist[i]<<endl;
        }
    }
}
int main()
{
    cin>>n>>e;
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        edge_list.push_back(Edges(a,b,c)); //directed
        //edge_list.push_back(Edges(b,a,c)); //undirected
    }

    for(int i=0;i<n;i++) dist[i]=INT_MAX;
    dist[0]=0;

    bellman();

    return 0;
}