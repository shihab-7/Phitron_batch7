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
    int n,x;
    cin>>n>>x;
    vector<int>v(n),frq(1001,0);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        frq[v[i]]++;
    }
    int mex=0;
    for(int i=0;i<x;i++) if(frq[i]==0) mex++;
    if(frq[x]!=0) mex++;
    cout<<mex<<endl;
    return 0;
}