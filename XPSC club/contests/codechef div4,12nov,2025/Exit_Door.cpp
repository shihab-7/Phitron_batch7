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
        int ans=0;
        while(v.size()>1)
        {
            int mx=v[0],idx=0;
            for(int i=1;i<v.size();i++)
            {
                if(v[i]>mx)
                {
                    mx=v[i];
                    idx=i;
                }
            }
            int l=idx,r=v.size()-idx-1;
            ans+=min(l,r);
            v.erase(v.begin()+idx);
        }
        cout<<ans<<endl;
    }
    return 0;
}