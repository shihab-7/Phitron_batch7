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
        int mn=INT_MAX, mx=INT_MIN,mn_idx=-1, mx_idx=-1;
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            mn=min(mn, val);
            mx=max(mx, val);
            v[i]=val;
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]==mn) mn_idx=i;
            if(v[i]==mx) mx_idx=i;
        }
        if(mn_idx>mx_idx) swap(mn_idx, mx_idx);
        cout<<v[mn_idx]<<" "<<v[mx_idx]<<endl;
    }
    return 0;
}