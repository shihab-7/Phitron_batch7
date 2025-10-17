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
    int rec;
    cin>>rec;
    map<pair<int,int>,string>mp;
    while(rec--)
    {
        int c1,c2;
        string s;
        cin>>c1>>c2>>s;
        mp[{c1,c2}]=s;
    }
    int op;
    cin>>op;
    while(op--)
    {
        int q1,q2;
        cin>>q1>>q2;
        cout<<mp[{q1,q2}]<<endl;
    }
    return 0;
}