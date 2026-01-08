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
        int x;
        cin>>x;
        int ans=0;
        int l=0, r=n-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(v[mid]<=x)
            {
                ans=mid+1;
                l=mid+1;
            }
            else r=mid-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}