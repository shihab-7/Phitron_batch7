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
    ll n;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
        for(int i=0;i<n/2;i++) cout<<2<<" ";
        cout<<endl;
    }
    else
    {
        cout<<((n-3)/2)+1<<endl;
        for(int i=0;i<(n-3)/2;i++) cout<<2<<" ";
        cout<<3<<" ";
        cout<<endl;
    }
    return 0;
}