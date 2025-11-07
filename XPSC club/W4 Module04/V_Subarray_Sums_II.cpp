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
    int n,x;
    cin>>n>>x;
    map<ll,ll>sum_frq;
    sum_frq[0]=1;
    ll sum=0,ans=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        sum+=a;
        ans+=sum_frq[sum - x];
        sum_frq[sum]++;
    }
    cout<<ans<<endl;
    return 0;
}