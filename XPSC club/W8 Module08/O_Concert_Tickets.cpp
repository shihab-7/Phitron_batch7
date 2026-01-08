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
    int n,m;
    cin>>n>>m;
    multiset<int>ms;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        ms.insert(val);
    }
    for(int i=0;i<m;i++)
    {
        int val;
        cin>>val;
        auto it=ms.upper_bound(val);
        if(it==ms.begin()) cout<<-1<<endl;
        else
        {
            it--;
            cout<<*it<<endl;
            ms.erase(it);
        }
    }
    return 0;
}