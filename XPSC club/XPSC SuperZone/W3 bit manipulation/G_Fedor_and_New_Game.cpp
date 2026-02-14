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
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>v(m+1);
    for(int i=0;i<=m;i++) cin>>v[i];
    int cnt=0;
    for(int i=0;i<m;i++)
    {
        if(__builtin_popcount(v[m]^v[i])<=k) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}