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
        ll n;
        cin>>n;
        int mxBitPos=__lg(n);
        deque<ll>dq;
        for(int k=0;k<=mxBitPos;k++)
        {
            if((n>>k)&1) 
            {
                ll val=n-(1LL<<k);
                if(val>0) dq.push_front(val);
            }
        }
        dq.push_back(n);
        cout<<dq.size()<<endl;
        for(auto a:dq) cout<<a<<" ";
        cout<<endl;
    }
    return 0;
}