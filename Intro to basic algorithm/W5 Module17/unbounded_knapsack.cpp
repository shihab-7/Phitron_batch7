#include <bits/stdc++.h>
using namespace std;
int val[1005], wt[1005];
int dp[1005][1005];
int unbounded_knapsack(int i, int mx_wt)
{
    if(i<0 || mx_wt<=0) return 0;
    if(dp[i][mx_wt]!=-1) return dp[i][mx_wt];
    if(wt[i]<=mx_wt)
    {
        int op1= unbounded_knapsack(i, mx_wt-wt[i]) + val[i]; // take the item
        int op2= unbounded_knapsack(i-1, mx_wt); // not take the item
        dp[i][mx_wt]= max(op1, op2);
        return dp[i][mx_wt];
    }
    else
    {
        dp[i][mx_wt]= unbounded_knapsack(i-1, mx_wt);
        return dp[i][mx_wt];
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++) cin>>val[i];
    for(int i=0; i<n; i++) cin>>wt[i];

    int mx_wt;
    cin>>mx_wt;
    for(int i=0;i<1005;i++)
        for(int j=0;j<1005;j++)
            dp[i][j]=-1;

    cout<<unbounded_knapsack(n-1,mx_wt)<<"\n";
    
    return 0;
}