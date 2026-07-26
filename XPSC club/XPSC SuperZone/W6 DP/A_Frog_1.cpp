#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

const int N=1e5+5;
int n, a[N], inf=2e9;
int dp[N];

int f(int i)
{
    if(i==n) return 0;
    if(dp[i]!=-1) return dp[i];
    int ans=inf;
    if(i+1<=n) ans=min(ans, abs(a[i]-a[i+1])+f(i+1));
    if(i+2<=n) ans=min(ans, abs(a[i]-a[i+2])+f(i+2));
    return dp[i]=ans;
}

int main()
{
    shihab
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    // memset(dp,-1,sizeof(dp));
    // cout<<f(1)<<endl;

    dp[1]=0;
    dp[2]=abs(a[1]-a[2]);
    for(int i=3;i<=n;i++)
    {
        dp[i]=min(dp[i-1]+abs(a[i]-a[i-1]), dp[i-2]+abs(a[i]-a[i-2]));
    }
    cout<<dp[n]<<endl;
    return 0;
}