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
    vector<pair<ll,ll>>v(n);
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v[i]={a,i+1};
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-2;i++)
    {
        int j=i+1;
        int k=n-1;
        while(j<k)
        {
            ll sum=v[i].first+v[j].first+v[k].first;
            if(sum==x)
            {
                cout<<v[i].second<<" "<<v[j].second<<" "<<v[k].second<<endl;
                return 0;
            }
            else if(sum<x) j++;
            else k--;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}