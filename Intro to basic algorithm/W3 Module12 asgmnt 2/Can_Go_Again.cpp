#include<bits/stdc++.h>
using namespace std;

class Edges{
    public:
    int a,b,c;
    Edges(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
};
int n,e;
long long int dist[1005];
vector<Edges>edg_lst;
bool cycle = false;
void bellman()
{
    for(int i=0;i<n-1;i++)
    {
        for(auto ed:edg_lst)
        {
            int a,b,c;
            a=ed.a;
            b=ed.b;
            c=ed.c;
            if(dist[a]!=LLONG_MAX && dist[a]+c <dist[b]) 
            {
                dist[b]=dist[a]+c;
            }
        }
    }
    for(auto ed:edg_lst)
    {
        int a,b,c;
        a=ed.a;
        b=ed.b;
        c=ed.c;
        if(dist[a]!=LLONG_MAX && dist[a]+c <dist[b]) 
        {
            cycle=true;
            return;
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
        edg_lst.push_back(Edges(a,b,c));
    }
    for(int i=1;i<=n;i++) dist[i]=LLONG_MAX;
    int s;
    cin>>s;
    dist[s]=0;
    bellman();
    if(cycle) cout<<"Negative Cycle Detected"<<endl;
    else
    {
        int t;
        cin>>t;
        while(t--)
        {
            int d;
            cin>>d;
            if(dist[d]==LLONG_MAX) cout<<"Not Possible"<<endl;
            else cout<<dist[d]<<endl;
        } 
    }
    return 0;
}