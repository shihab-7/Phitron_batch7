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
    int x,n;
    cin>>x>>n;
    set<int>lights;
    multiset<int>dist;

    lights.insert(0);
    lights.insert(x);
    dist.insert(x);
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        auto it=lights.upper_bound(a);
        int rgt=*it;
        it--;
        int lft=*it;
        dist.erase(dist.find(rgt-lft));
        dist.insert(rgt-a);
        dist.insert(a-lft);
        lights.insert(a);cout<<*dist.rbegin()<<" ";
    }
    return 0;
}