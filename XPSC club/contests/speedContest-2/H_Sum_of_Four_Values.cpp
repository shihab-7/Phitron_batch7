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
    ll n,x;
    cin>>n>>x;
    vector<ll>v(n+1);
    for(int i=1;i<=n;i++)cin>>v[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            for(int k=j+1;k<=n;k++)
            {
                for(int l=k+1;l<=n;l++)
                {
                    if(v[i]+v[j]+v[k]+v[l]==x)
                    {
                        cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}