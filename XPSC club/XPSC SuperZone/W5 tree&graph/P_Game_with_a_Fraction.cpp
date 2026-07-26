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
        ll p,q;
        cin>>p>>q;
        if(p>=q)
        {
            cout<<"Alice"<<endl;
            continue;
        }
        if(3*p>=2*q) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    }
    return 0;
}