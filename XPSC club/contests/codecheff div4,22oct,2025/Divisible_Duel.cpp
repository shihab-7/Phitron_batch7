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
        int x,y;
        cin>>x>>y;
        int es=0,os=0;
        vector<int>v;
        for(int i=x;i<=y;i++) if(i%x==0) v.push_back(i);
        for(auto a:v)
        {
            if(a%2==0) es+=a;
            else os+=a;
        }
        if(es>=os) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}