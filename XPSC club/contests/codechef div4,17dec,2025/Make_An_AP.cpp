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
        vector<int>a(n);
        int mn=INT_MAX, mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mn=min(mn,a[i]);
            mx=max(mx,a[i]);
        }
        // cout<<mn<<" "<<mx<<endl;
        int cnt=0,cnt2=0;
        for(int i=mn;i<=mx;i++)
        {
            if(i%2==1)
            {
                cnt++;
                for(int j=0;j<n;j++)
                {
                    if(a[j]==i)cnt--;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)cnt2++;
        }
        if(cnt2==0) cout<<cnt<<endl;
        else cout<<cnt*cnt2<<endl;
    }
    return 0;
}