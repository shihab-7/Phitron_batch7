#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

const int N=2e5+5;

int main()
{
    shihab
    int n,k,q;
    cin>>n>>k>>q;
    vector<int>v(N);
    for(int i=1;i<=n;i++)
    {
        int l,r;
        cin>>l>>r;
        v[l]++;
        v[r+1]--;
    }
    for(int i=1;i<N;i++) v[i]=v[i]+v[i-1];

    vector<int>ans(N);
    for(int i=1;i<N;i++)
    {
        if(v[i]>=k) ans[i]=1;
    }
    for(int i=1;i<N;i++) ans[i]=ans[i]+ans[i-1];
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<ans[r]-ans[l-1]<<endl;
    }
    return 0;
}