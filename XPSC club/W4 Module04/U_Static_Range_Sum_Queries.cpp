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
    int n,q;
    cin>>n>>q;
    vector<ll>v(n+2),prfx_sum(n+2,0);
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
        prfx_sum[i]=prfx_sum[i-1]+v[i];
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<prfx_sum[r]-prfx_sum[l-1]<<endl;
    }
    return 0;
}