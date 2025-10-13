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
    int n;
    cin>>n;
    deque<int> dq(n);
    for(int i=0;i<n;i++) cin>>dq[i];
    int s=0, d=0, turn=0;
    while(!dq.empty())
    {
        int mx=INT_MIN;
        mx=max(dq.front(), dq.back());
        if(turn%2==0) s+=mx;
        else d+=mx;
        if(dq.front()>=mx) dq.pop_front();
        else dq.pop_back();
        turn++;
    }
    cout<<s<<" "<<d<<endl;
    return 0;
}