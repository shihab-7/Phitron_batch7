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
    string s;
    cin>>s;
    ll nb,ns,nc;
    cin>>nb>>ns>>nc;
    ll pb,ps,pc;
    cin>>pb>>ps>>pc;
    ll cst;
    cin>>cst;
    ll cb=0,cs=0,cc=0;
    for(auto a:s)
    {
        if(a=='B') cb++;
        else if(a=='S') cs++;
        else cc++;
    }

    auto ok=[&](ll m)
    {
        ll costb=max(0LL,cb*m-nb)*pb;
        ll costs=max(0LL,cs*m-ns)*ps;
        ll costc=max(0LL,cc*m-nc)*pc;
        ll total=costb+costs+costc;
        return total<=cst;
    };
    ll l=0,r=1e13,ans,mid;
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