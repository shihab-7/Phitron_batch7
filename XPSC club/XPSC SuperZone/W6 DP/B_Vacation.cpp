#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

const int N=1e5+5;
// ll n,a[N], b[N], c[N];
// ll dp[N][3];

// int f(int i, int last)
// {
//     if(i>n) return 0;
//     if(dp[i][last]!=-1) return dp[i][last];
//     ll ans=0;
//     for(int k=0;k<3;k++)
//     {
//         if(k==last)continue;
//         if(k==0) ans=max(ans, a[i]+f(i+1,k));
//         else if(k==1) ans=max(ans, b[i]+f(i+1,k));
//         else ans=max(ans, c[i]+f(i+1,k));
//     }
//     return dp[i][last]=ans;
// }

ll n, happiness[N][3], dp[N][3];


int main()
{
    shihab
    // cin>>n;
    // for(int i=1;i<=n;i++) cin>>a[i]>>b[i]>>c[i];
    // memset(dp,-1,sizeof(dp));
    // cout<<f(1,-1)<<endl;

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>happiness[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        dp[1][i]=happiness[1][i];
    }

    for(int day=1;day<=n;day++)
    {
        for(int c_tsk=0;c_tsk<3;c_tsk++)
        {
            ll mx_prft=0;
            for(int lst_tsk=0;lst_tsk<3;lst_tsk++)
            {
                if(lst_tsk!=c_tsk)
                {
                    ll crnt_prft=max(mx_prft, dp[day-1][lst_tsk]+happiness[day][c_tsk]);
                    mx_prft=crnt_prft;
                }
            }
            dp[day][c_tsk]=mx_prft;
        }
    }
    cout<<max({dp[n][0], dp[n][1], dp[n][2]})<<endl;
    return 0;
}