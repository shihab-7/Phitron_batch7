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
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        auto it_l=lower_bound(v.begin(),v.end(),l);
        auto it_r=upper_bound(v.begin(),v.end(),r);
        if(it_l==v.end() || it_r==v.begin()) cout<<0<<endl;
        else cout<<it_r - it_l<<" ";
    }
    return 0;
}