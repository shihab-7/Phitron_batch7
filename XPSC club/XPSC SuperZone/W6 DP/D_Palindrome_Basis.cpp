#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

const int maxN=4e4,N=5e2, M=4e4+5, MOD=1e9+7;
ll dp[N][M];
vector<int>palindromes;
void  pre_cal()
{
    for(int i=1;i<=maxN;i++)
    {
        string s=to_string(i), s2=s;
        reverse(s2.begin(),s2.end());
        if(s==s2) palindromes.push_back(i);
    }
}

ll f(int i, int sum)
{
    if(i>=palindromes.size()) return (sum==0);
    if(dp[i][sum]!=-1) return dp[i][sum];
    ll ans=0;
    if(palindromes[i]<=sum)
    {
        ans+=f(i, sum-palindromes[i])%MOD;
    }
    ans+=f(i+1,sum)%MOD;
    return dp[i][sum]=ans%MOD;
}

int main()
{
    shihab
    pre_cal();
    memset(dp,-1,sizeof(dp));
    test
    {
        int target_sum;
        cin>>target_sum;
        cout<<f(0,target_sum)<<endl;
    }
    return 0;
}