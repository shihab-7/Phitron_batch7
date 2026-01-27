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
    int m,n;
    cin>>m>>n;
    vector<tuple<int,int,int>>v(n);
    for(int i=0;i<n;i++)
    {
        int t,z,y;
        cin>>t>>z>>y;
        v[i]={t,z,y};
    }
    vector<int>can(n);
    auto ok=[&](int mid)
    {
        vector<int>tmp(n);
        int has=m;
        for(int i=0;i<n;i++)
        {
            tuple<int,int,int>T=v[i];
            int t=get<0>(T);
            int z=get<1>(T);
            int y=get<2>(T);
            int total=((t*z)+y);
            int can= mid/total;
            int rem=mid%total;
            int cur=((can*z)+min(z,(rem/t)));
            cur=min(cur,has);
            has-=cur;
            tmp[i]=cur;
        }
        if(!has)
        {
            for(int i=0;i<n;i++) can[i]=tmp[i];
        }
        return (!has);
    };

    int l=0,r=1e8,mid,ans;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(ok(mid))
        {
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<endl;
    for(auto a:can) cout<<a<<" ";
    cout<<endl;
    return 0;
}