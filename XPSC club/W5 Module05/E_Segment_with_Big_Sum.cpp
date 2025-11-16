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
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    ll l=0,r=0,sum=0,mn=LLONG_MAX;
    while(r<n)
    {
        sum+=v[r];
        while(sum>=k)
        {
            ll sz=r-l+1;
            mn=min(mn,sz);
            sum-=v[l];
            l++;
        }
        r++;
    }
    if(mn==LLONG_MAX) cout<<-1<<endl;
    else cout<<mn<<endl;
    return 0;
}