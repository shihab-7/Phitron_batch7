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
    deque<pair<pair<int,int>,int>>guests;
    set<int>rooms;
    set<pair<int,int>>e_dates;
    for(int i=1;i<=n;i++)
    {
        int st,ed;
        cin>>st>>ed;
        guests.push_back({{st,ed},i});
        rooms.insert(i);
    }
    sort(guests.begin(),guests.end());
    ll ans[n+2], cnt=0;
    while(!guests.empty())
    {
        auto [time,idx]=guests.front();
        auto [st,ed]=time;

        if(e_dates.size()&&e_dates.begin()->first<st)
        {
            rooms.insert(e_dates.begin()->second);
            e_dates.erase(e_dates.begin());
        }
        else 
        {
            int room = *rooms.begin();
            rooms.erase(rooms.begin());
            ans[idx]=room;
            e_dates.insert({ed,room});
            guests.pop_front();
        }
        cnt=max(cnt, (ll)e_dates.size());
    }
    cout<<cnt<<endl;
    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
    return 0;
}