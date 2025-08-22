#include<bits/stdc++.h>
using namespace std;
vector<int> adj_lst[1000005];

int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        adj_lst[a].push_back(b);
        adj_lst[b].push_back(a);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int src;
        cin>>src;
        vector<int> elm;

        for(int v:adj_lst[src])
        {
            elm.push_back(v);
        }
        sort(elm.begin(),elm.end(),greater<int>());
        if(elm.empty()) cout<<-1<<endl;
        else
        {
            for(int val:elm) cout<<val<<" ";
            cout<<endl;
        }
    }
    return 0;
}