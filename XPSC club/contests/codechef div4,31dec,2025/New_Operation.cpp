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
        int n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        deque<ll>dq_mn,dq_mx;
        for(ll val:a) dq_mn.push_back(val);
        for(ll val:a) dq_mx.push_back(val);

        while(dq_mn.size()>1)
        {
            ll fst=dq_mn.front();
            dq_mn.pop_front();
            ll scd=dq_mn.front();
            dq_mn.pop_front();
            dq_mn.push_front(fst+(2*scd));
        }
        while(dq_mx.size()>1)
        {
            ll scd=dq_mx.back();
            dq_mx.pop_back();
            ll fst=dq_mx.back();
            dq_mx.pop_back();
            dq_mx.push_back(fst+(2*scd));
        }
        cout<<dq_mn.front()<<" "<<dq_mx.back()<<endl;
    }
    return 0;
}