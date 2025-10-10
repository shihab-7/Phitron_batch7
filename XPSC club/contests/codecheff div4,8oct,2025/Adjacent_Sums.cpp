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
        vector<ll>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<ll>dp(n);
        dp[0]=a[0];
        for(int i=1;i<n;i++)
        {
            ll cost1=a[i]+dp[i-1];
            if(i-1>=0)
            {
                ll cost2 = abs(a[i]-a[i-1]);
                if(i-2>=0) cost2+=a[i-2];
                if(i-3>=0) cost2+=dp[i-3];
                dp[i]=min(cost1,cost2);
            }
        }
        cout<<dp[n-1]<<endl;
    }
    return 0;
}