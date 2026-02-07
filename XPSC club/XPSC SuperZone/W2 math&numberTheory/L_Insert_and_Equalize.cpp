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
        ll n;
        cin>>n;
        vector<ll>v;
        map<ll,bool>mp;
        for(int i=1;i<=n;i++)
        {
            int val;
            cin>>val;
            v.push_back(val);
            mp[val]=true;
        }
        if(n==1) cout<<1<<endl;
        else
        {
            sort(v.begin(),v.end());
            ll gc=0;
            for(int i=1;i<n;i++)
            {
                ll dif=v[i]-v[i-1];
                gc=__gcd(dif,gc);
            }
            ll ans=0;
            for(int i=0;i<n-1;i++)
            {
                ans+=(v[n-1]-v[i])/gc;
            }
            for(int i=v[n-1]-gc,j=1;1;i-=gc,j++)
            {
                if(mp[i]==false)
                {
                    cout<<ans+j<<endl;
                    break;
                }
            }
        } 
    }
    return 0;
}