#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

const int N=1e3+5;
int n,m,l, dp[N][N];
string a,b,c;

int f(int i, int j, int k)
{
    if(k>=l) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int ans=1e4;
    if(i<n)
    {
        if(a[i]==c[k]) ans=min(ans,f(i+1,j,k+1));
        else ans=min(ans,1+f(i+1,j,k+1));
    }
    if(j<m)
    {
        if(b[j]==c[k]) ans=min(ans,f(i,j+1,k+1));
        else ans=min(ans,1+f(i,j+1,k+1));
    }
    return dp[i][j]=ans;
}

int main()
{
    shihab
    test
    {
        cin>>a>>b>>c;
        n=a.size();
        m=b.size();
        l=c.size();
        memset(dp,-1,sizeof(dp));
        cout<<f(0,0,0)<<endl;
    }
    return 0;
}