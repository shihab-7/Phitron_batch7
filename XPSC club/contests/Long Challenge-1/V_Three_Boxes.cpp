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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a+b+c<=d)cout<<1<<endl;
        else if(a+c<=d|| b+c<=d||a+b<=d)cout<<2<<endl;
        else cout<<3<<endl;
    }
    return 0;
}