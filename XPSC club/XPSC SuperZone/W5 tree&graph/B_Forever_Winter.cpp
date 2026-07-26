#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

int main()
{
    shihab
    test
    {
        int n,m;
        cin>>n>>m;
        map<int,set<int>>grf;
        for(int i=1;i<=m;i++)
        {
            int u,v;
            cin>>u>>v;
            grf[u].insert(v);
            grf[v].insert(u);
        }
        int leaf=-1,par_of_leaf=-1;
        for(int i=1;i<=n;i++)
        {
            if(grf[i].size()==1)
            {
                leaf=i;
                break;
            }
        }
        int x,y;
        for(int i=1;i<=n;i++)
        {
            if(grf[i].find(leaf)!=grf[i].end())
            {
                y=grf[i].size()-1;
                par_of_leaf=i;
                break;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(grf[i].find(par_of_leaf)!=grf[i].end()&& grf[i].size()>1)
            {
                x=grf[i].size();
                break;
            }
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}