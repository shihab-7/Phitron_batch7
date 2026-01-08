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
        int r,b,g;
        cin>>r>>b>>g;
        int mn=min(r,g);
        mn=min(mn,b);
        cout<<mn*10+((r-mn)+(b-mn)+(g-mn))*3<<endl;
    }
    return 0;
}