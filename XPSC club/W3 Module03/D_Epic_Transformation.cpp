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
        map<int,int>cnt;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            cnt[x]++;
        }
        // for(auto [x,y]:cnt) cout<<y<<" "<<x<<endl;
        priority_queue<int>pq;
        for(auto [x,y]:cnt) pq.push(y);
        while(!pq.empty())
        {
            if(pq.size() <2) break;
            int fst_top=pq.top();
            pq.pop();
            int sec_top=pq.top();
            pq.pop();
            fst_top--;
            sec_top--;
            if(fst_top>=1) pq.push(fst_top);
            if(sec_top>=1) pq.push(sec_top);
        }
        int ans=0;
        while(!pq.empty())
        {
            ans+=pq.top();
            pq.pop();
        }
        cout<<ans<<endl;
    }
    return 0;
}