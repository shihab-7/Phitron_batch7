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
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>v(n),v1(m);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<m;i++) cin>>v1[i];
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    int ans=0, i=0, j=0;
    while(i<n && j<m)
    {
        if(abs(v[i]-v1[j])<=k)
        {
            ans++;
            i++;
            j++;
        }
        else if(v[i]<v1[j]) i++;
        else j++;
    }
    cout<<ans<<endl;
    return 0;
}