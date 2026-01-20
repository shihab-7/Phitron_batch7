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
        int n,m,h;
        cin>>n>>m>>h;
        vector<ll>v(n+1);
        for(int i=1;i<=n;i++) cin>>v[i];
        vector<ll>tmp(n+1),trck(n+1,0);
        tmp=v;
        int indx=0,updt=0;
        while(m--)
        {
            ll b,c;
            cin>>b>>c;
            indx++;
            if(trck[b]<=updt) tmp[b]=v[b];
            tmp[b]+=c;
            trck[b]=indx;
            if(tmp[b]>h) updt=indx;
        }
        for(int i=1;i<=n;i++)
        {
            if(trck[i]<=updt) cout<<v[i]<<" ";
            else cout<<tmp[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}