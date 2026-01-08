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
        vector<int>v(n+1);
        for(int i=0;i<=n;i++) cin>>v[i];
        int res=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int mx_hy=max(v[i],v[i+1]);
            res=min(res,mx_hy);
        }
        cout<<res<<endl;
    }
    return 0;
}