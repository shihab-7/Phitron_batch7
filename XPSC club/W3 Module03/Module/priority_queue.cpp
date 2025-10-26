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
    // priority_queue -> by default max-heap
    priority_queue<int>pq;
    pq.push(10); // O(log N)
    pq.push(5);
    pq.push(20);
    pq.push(15);

    cout<<pq.top()<<endl; // 20  O(1)
    pq.pop(); // O(log N)
    cout<<pq.top()<<endl; // 20  O(1)

    while(!pq.empty())
    {
        int val=pq.top();
        cout<<val<<" ";
        pq.pop();
    }

    return 0;
}