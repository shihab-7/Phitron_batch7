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
        int n,q;
        cin>>n>>q;
        vector<int>v(n),prfx(n+1);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.rbegin(), v.rend());
        for(int i=1;i<=n;i++) prfx[i]=prfx[i-1]+v[i-1];
        while(q--)
        {
            int val;
            cin>>val;
            auto it=lower_bound(prfx.begin(), prfx.end(), val);
            if(it==prfx.end()) cout<<-1<<endl;
            else cout<<it-prfx.begin()<<endl;
        }
    }
    return 0;
}