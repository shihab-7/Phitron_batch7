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
        ll n,m;
        cin>>n>>m;
        if(n==1) cout<<m+1<<endl;
        else
        {
            ll bits=floor(log2(m)); // Maximum bits required to represent m
            ll ans=m-pow(2,bits)+1; // Count of numbers with maximum bits
            ans=ans*2; // Each can form 2 optimal arrays
            cout<<ans<<endl;
        }
    }
    return 0;
}