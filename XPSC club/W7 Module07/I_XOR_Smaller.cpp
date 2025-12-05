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
        vector<int>v(n);
        int x=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            x&=v[i];
        }
        int may_b=1,ans=0;
        while(x)
        {
            if(x&1) ans+=may_b;
            may_b*=2;
            x>>=1;
        }
        cout<<ans<<endl;
    }
    return 0;
}