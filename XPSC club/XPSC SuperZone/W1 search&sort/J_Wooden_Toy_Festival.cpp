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
        sort(v.begin(),v.end());

        auto ok=[&](int time)
        {
            int cnt=1,l=0;
            for(int r=0;r<n;r++)
            {
                if(v[r]-v[l]>2*time)
                {
                    l=r;
                    cnt++;
                }
            }
            return cnt<=3;
        };
        int ans,l=0,r=1e9,mid;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(ok(mid))
            {
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}