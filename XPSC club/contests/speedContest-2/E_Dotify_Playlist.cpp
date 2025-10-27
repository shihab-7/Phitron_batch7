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
        int n,k,l;
        cin>>n>>k>>l;
        priority_queue<int>pq;
        for(int i=0;i<n;i++)
        {
            int tm,lng;
            cin>>tm>>lng;
            if(l==lng) pq.push(tm);
        }
        int ans=0;
        while(!pq.empty())
        {
            // cout<<pq.top()<<" ";
            ans+=pq.top();
            k--;
            if(k==0)break;
            pq.pop();
        }
        if(pq.empty())cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}