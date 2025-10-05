#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n+1),frq(n+1,0);
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
            if(v[i]>=1 &&v[i]<=n) frq[v[i]]++;
        }
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(frq[i]==0) cnt++;
        }
        if(cnt<=k) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}