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
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];

    int l=0,r=0;
    ll ans=0;
    while(l<n && r<m)
    {
        int curr=a[l],cnt1=0,cnt2=0;
        while(l<n && a[l]==curr)
        {
            cnt1++;
            l++;
        }
        while(r<m && curr>b[r]) r++;
        while(r<m && b[r]==curr)
        {
            cnt2++;
            r++;
        }
        ans+=(1LL*cnt1*cnt2);
    }
    cout<<ans<<endl;
    return 0;
}