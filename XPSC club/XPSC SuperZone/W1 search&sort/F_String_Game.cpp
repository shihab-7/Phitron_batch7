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
    string t,p;
    cin>>t;
    cin>>p;
    int n=t.size(),m=p.size();
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    auto ok=[&](int mid)
    {
        vector<bool>bad(n+1);
        for(int i=0;i<mid;i++) bad[v[i]]=true;
        int j=0;
        bool f=false;
        for(int i=0;i<n;i++)
        {
            if(t[i]==p[j] && !bad[i+1])
            {
                j++;
                if(j==m)
                {
                    f=true;
                    break;
                }
            }
        }
        return f;
    };

    int l=0,r=n,mid,ans=0;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(ok(mid))
        {
            ans=mid+1;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans-1<<endl;
    return 0;
}