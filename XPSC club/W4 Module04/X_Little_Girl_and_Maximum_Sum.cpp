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
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>diff(n+1);
    for(int i=0;i<q;i++)
    {
        int l,r;
        cin>>l>>r;
        l--,r--;
        diff[l]++;
        diff[r+1]--;
    }
    for(int i=1;i<=n;i++)diff[i]=diff[i-1]+diff[i];
    sort(a.begin(),a.end());
    sort(diff.begin(),diff.end()-1);
    ll ans=0;
    for(int i=0;i<n;i++)ans+=(1LL*a[i]*diff[i]);
    cout<<ans<<endl;
    return 0;
}