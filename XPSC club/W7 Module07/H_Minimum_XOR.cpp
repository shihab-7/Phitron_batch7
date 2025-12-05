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
        int t_xor=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            t_xor^=v[i];
        }
        int res=t_xor;
        for(int i=0;i<n;i++)
        {
            int tmp=v[i]^t_xor;
            res=min(res,tmp);
        }
        cout<<res<<endl;
    }
    return 0;
}