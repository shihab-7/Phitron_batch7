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
    int i=1;
    while(1)
    {
        int n,q;
        cin>>n>>q;
        vector<int>v(n);
        if(n==0 && q==0) break;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v[i]=x;
        }
        sort(v.begin(),v.end());
        cout<<"CASE# "<<i<<":"<<endl;
        i++;
        for(int i=0;i<q;i++)
        {
            int x;
            cin>>x;
            auto it = lower_bound(v.begin(), v.end(), x);
            if(it!=v.end() && *it==x) cout << x << " found at " << (it - v.begin() + 1) << endl;
            else cout << x << " not found" << endl;
        }
        // printv(v);cout<<endl;
    }
    return 0;
}