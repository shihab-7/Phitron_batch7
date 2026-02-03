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
        ll n,m,k;
        cin>>n>>m>>k;
       
        auto ok=[&](ll mid)
        {
            ll per_r=m/(mid+1)*mid+m%(mid+1);
            return per_r*n>=k;
        };
        ll l=1,r=m,mid;
        while(l<r)
        {
            mid=l+(r-l)/2;
            if(ok(mid)) r=mid;
            else l=mid+1;
        }
        cout<<r<<endl;
    }
    return 0;
}