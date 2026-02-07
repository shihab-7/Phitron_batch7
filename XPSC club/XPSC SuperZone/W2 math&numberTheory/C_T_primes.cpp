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
    int n;
    cin>>n;

    auto prime=[&](ll num)
    {
        if(num==1) return false;
        for(ll i=2;i*i<=num;i++)
        {
            if(num%i==0) return false;
        }
        return true;
    };
    auto prfct_sqr=[&](ll num)
    {
        ll r=sqrtl(num);
        return (r*r)==num;
    };
    while(n--)
    {
        ll x;
        cin>>x;
        if(prfct_sqr(x) && prime(sqrtl(x))) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    // every prime square has exactly 3 prime divisors , except no other number has exactly 3 prime divisors
    return 0;
}