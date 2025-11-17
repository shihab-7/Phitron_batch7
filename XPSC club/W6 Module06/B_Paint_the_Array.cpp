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
        int n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        ll g1=0,g2=0,ans=0;
        bool ok=true;
        for(int i=0;i<n;i+=2) g1=__gcd(g1,v[i]);
        for(int i=1;i<n;i+=2) g2=__gcd(g2,v[i]);
        for(int i=1;i<n;i+=2)
        {
            if(v[i]%g1==0)
            {
                ok=false;
            }
        }
        if(ok) ans=g1;
        else
        {
            ok=true;
            for(int i=0;i<n;i+=2)
            {
                if(v[i]%g2==0)
                {
                    ok=false;
                }
            }
            if(ok) ans=g2;
        }
        cout<<ans<<endl;
    }
    return 0;
}