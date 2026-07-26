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
    int n,root;
    cin>>n;
    vector<int>grf[n+1], bad(n+1), a(n+1);
    for(int i=1;i<=n;i++)
    {
        int p,c;
        cin>>p>>c;
        int u=p, v=i;
        if(u!=-1) grf[u].push_back(v);
        else root=i;
        if(c==1)
        {
            bad[u]++;
            a[v]=1;
        }
    }
    vector<int>ans;
    for(int i=1;i<=n;i++)
    {
        if(root==i) continue;
        if(grf[i].size()==bad[i] &&a[i]==1) ans.push_back(i);
    }
    if(ans.empty()) cout<<-1<<endl;
    else
    {
        for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}