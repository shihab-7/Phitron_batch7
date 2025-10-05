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
    float ans=0.0;
    while(n--)
    {
        float a,b;
        cin>>a>>b;
        ans+=(a*b);
    }
    cout<<fixed<<setprecision(3)<<ans<<endl;
    return 0;
}