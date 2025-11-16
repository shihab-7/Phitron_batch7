#include<bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    shihab
    int n;
    cin>>n;
    ordered_set<int> s;
    for(int i=1;i<=n;i++) s.insert(i);
    int idx=1%n;
    while(n--)
    {
        auto it=s.find_by_order(idx);
        cout<<*it<<" ";
        s.erase(it);
        if(n)idx=(idx+1)%n;
    }
    return 0;
}