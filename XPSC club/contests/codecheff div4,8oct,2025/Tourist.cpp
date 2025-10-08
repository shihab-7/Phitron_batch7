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
        int n,a,b,ans=0,mn=INT_MAX;
        cin>>n>>a>>b;
        while(n--)
        {
            int x,y,xi,yi;
            cin>>x>>y;
            xi=abs(x-a);
            yi=abs(y-b);
            ans=xi+yi;
            mn=min(mn,ans);
        }
        cout<<mn<<endl;
    }
    return 0;
}