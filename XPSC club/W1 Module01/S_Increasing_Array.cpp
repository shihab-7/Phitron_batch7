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
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    ll cnt=0;
    for(int i=1;i<n;i++)
    {
        if(v[i]<=v[i-1])
        {
            cnt+=v[i-1]-v[i];
            v[i]=v[i-1];
        }
    }
    cout<<cnt<<endl;
    return 0;
}