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
    }
    int q;
    cin>>q;
    while(q--)
    {
        int src,dst;
        cin>>src>>dst;
        bool found=false;
        if(src==dst) found=true;
        else
        {
            for(int v:adj_lst[src])
            {
                if(v==dst)
                {
                    found=true;
                    break;
                }
            }
        }
        if(found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}