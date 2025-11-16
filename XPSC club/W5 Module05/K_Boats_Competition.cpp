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
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        int ans=0;
        for(int k=2;k<=2*n;k++)
        {
            int l=0,r=n-1,cnt=0;
            while(l<r)
            {
                if(v[l]+v[r]>k) r--;
                else if(v[l]+v[r]<k) l++;
                else
                {
                    cnt++;
                    l++;
                    r--;
                }
            }
            ans=max(ans,cnt);
        }
        cout<<ans<<endl;
    }
    return 0;
}