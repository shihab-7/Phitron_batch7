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
        vector<ll>f(n);
        for(int i=0;i<n;i++) cin>>f[i];

        ll sum=(f[0]+f[n-1])/(n-1);
        vector<ll>v(n);
        v[0]=(sum+f[1]-f[0])/2;
        v[n-1]=(sum+f[n-2]-f[n-1])/2;
        for(int i=1;i<n-1;i++)
        {
            v[i]=(f[i-1]+f[i+1]-2*f[i])/2;
        }
        for(auto a:v) cout<<a<<" ";
        cout<<endl;
    }
    return 0;
}