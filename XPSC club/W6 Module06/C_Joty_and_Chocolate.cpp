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
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    ll lcm=(a/__gcd(a,b))*b;
    ll c1=n/a, c2=n/b, cmn=n/lcm;
    ll total=((c1*p)+(c2*q)-(cmn*(p+q)))+(cmn*max(p,q));
    cout<<total<<endl;
    return 0;
}