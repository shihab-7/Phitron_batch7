#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int dp[100005];
bool make_it(ll r, ll n)
{
    if(r==n) return true;
    if(r>n) return false;
    if(dp[r]!=-1) return dp[r];
    bool op1=make_it(r+3,n);
    bool op2=make_it(r*2,n);
    return dp[r]= (op1 || op2);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        for(ll i=0;i<=n;i++) dp[i]=-1;
        if(make_it(1,n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}