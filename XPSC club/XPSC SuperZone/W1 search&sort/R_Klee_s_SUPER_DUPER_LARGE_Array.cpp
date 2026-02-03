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
        ll n,k;
        cin>>n>>k;

        auto sum=[&](ll l, ll r)
        {
            return (r-l+1)*(l+r)/2;
        };
        auto ok=[&](ll m)
        {
            if(sum(k,m)<=sum(m+1,n+k-1)) return true;
            else return false;
        };
        auto ok2=[&](ll m)
        {
            if(sum(k,m-1)>=sum(m,n+k-1)) return true;
            else return false;
        };

        ll l=k,r=k+n,m;
        while(l+1<r)
        {
            m=l+(r-l)/2;
            if(ok(m)) l=m;
            else r=m;
        }
        ll l2=k,r2=k+n;
        while(l2+1<r2)
        {
            m=l2+(r2-l2)/2;
            if(ok2(m)) r2=m;
            else l2=m;
        }
        cout<<min(sum(l+1,n+k-1)-sum(k,l),sum(k,r2-1)-sum(r2,n+k-1))<<endl;
    }
    return 0;
}