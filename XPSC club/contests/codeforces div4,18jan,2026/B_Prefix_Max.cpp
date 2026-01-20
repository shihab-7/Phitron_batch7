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
        for(int i=0;i<n;i++) cin>>v[i];
        ll ans=0;
        int mx=0;
        for(int i=0;i<n;i++)
        {
            mx=max(mx,v[i]);
            ans+=mx;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(v[i],v[j]);
                ll tmp_sum=0;
                int tmp_mx=0;
                for(int k=0;k<n;k++)
                {
                    tmp_mx=max(tmp_mx,v[k]);
                    tmp_sum+=tmp_mx;
                }
                ans=max(ans,tmp_sum);
                swap(v[i],v[j]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}