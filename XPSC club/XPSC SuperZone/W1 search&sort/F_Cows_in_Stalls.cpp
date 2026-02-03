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
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    auto ok=[&](int m)
    {
        int c=1,lst=v[0];
        for(int i=1;i<n;i++)
        {
            if(v[i]-lst>=m)
            {
                c++;
                lst=v[i];
            }
        }
        return c>=k;
    };

    int l=0,r=1e9,ans,mid;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(ok(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans<<endl;
    return 0;
}