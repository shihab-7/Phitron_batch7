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
    int a,b;
    cin>>a>>b;
    int ans=0,mx=max(a,b);
    if((a==b)||(a+b) >(2*mx)) ans=(a+b);
    else 
    {
        int x=max(a,b);
        ans=(2*x)-1;
    }
    cout<<ans<<endl;
    return 0;
}