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
    vector<ll>dv;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            dv.push_back(i);
            if(i!=(n/i)) dv.push_back(n/i);
        } 
    }
    sort(dv.begin(),dv.end());
    if(k>dv.size()) cout<<-1<<endl;
    else cout<<dv[k-1]<<endl;
    return 0;
}