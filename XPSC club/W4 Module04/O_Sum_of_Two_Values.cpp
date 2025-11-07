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
    ll n,x;
    cin>>n>>x;
    vector<pair<ll,ll>>v(n);
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v[i]={x,i+1};
    }
    sort(v.begin(),v.end());
    // printmp(v);cout<<endl;
    int i=0,j=n-1;
    while(i<j)
    {
        if(v[i].first+v[j].first==x)
        {
            cout<<v[j].second<<" "<<v[i].second<<endl;
            return 0;
        }
        else if(v[i].first+v[j].first<x)i++;
        else j--;
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}