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
    int n,q;
    cin>>n>>q;
    vector<priority_queue<int>>pq(n);
    while(q--)
    {
        int op,t;
        cin>>op>>t;
        if(op==0)
        {
            int x;
            cin>>x;
            pq[t].push(x);
        }
        else if(op==1)
        {
            if(!pq[t].empty()) cout<<pq[t].top()<<endl;
        }
        else if(op==2)
        {
            if(!pq[t].empty()) pq[t].pop();
        }
    }
    return 0;
}