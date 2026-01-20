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
    test
    {
        int n,x,k;
        cin>>n>>x>>k;
        int grl=n-x, boy=x;
        int rmn_b=boy%k;
        int rmn_g=grl%k;
        cout<<abs(rmn_b-rmn_g)<<endl;
    }
    return 0;
}