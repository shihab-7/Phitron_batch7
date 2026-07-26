#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

// const int N=1e2+5, M=1e5+5;
// int n, a[N], dp[N][M];

// int f(int i,int sum)
// {
//     if(i>n) return (sum==0);
//     if(dp[i][sum]!=-1) return dp[i][sum];
//     int ans=0;
//     if(a[i]<=sum)
//     {
//         ans+=f(i+1, sum-a[i]);
//     }
//     ans+=f(i+1, sum);
//     return dp[i][sum]=ans;
// }

const int M=1e5+5;
bool dp[M];
int main()
{
    shihab
    // int sum=0;
    // cin>>n;
    // for(int i=1;i<=n;i++)
    // {
    //     cin>>a[i];
    //     sum+=a[i];
    // }
    // memset(dp,-1,sizeof(dp));
    // vector<int>ans;
    // for(int trgt_sum=1; trgt_sum<=sum;trgt_sum++)
    // {
    //     if(f(1,trgt_sum)) ans.push_back(trgt_sum);
    // }
    // cout<<ans.size()<<endl;
    // for(auto v:ans) cout<<v<<" ";
    // cout<<endl;

    // iterative approach
    int n, total_sum=0;
    cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        total_sum+=a[i];
    }
    dp[0]=true;
    for(int i=1;i<=n;i++)
    {
        for(int sum=total_sum; sum>=a[i];sum--)
        {
            if(dp[sum-a[i]]) dp[sum]=true;
        }
    }
    vector<int>ans;
    for(int sum=1;sum<=total_sum;sum++)
    {
        if(dp[sum]) ans.push_back(sum);
    }
    cout<<ans.size()<<endl;
    for(auto v:ans) cout<<v<<" ";
    cout<<endl;
    return 0;
}