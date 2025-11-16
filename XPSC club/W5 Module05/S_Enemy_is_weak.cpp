#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

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
    vector<ll>v(n),l(n),r(n);
    for(int i=0;i<n;i++) cin>>v[i];
    ordered_set<ll>s1,s2;
    for(int i=n-1;i>=0;i--)
    {
        l[i]=s1.order_of_key(v[i]);
        s1.insert(v[i]);
    }
    for(int i=0;i<n;i++)
    {
        r[i]=s2.size()-s2.order_of_key(v[i]);
        s2.insert(v[i]);
    }
    // printv(l);cout<<endl;
    // printv(r);cout<<endl;
    ll ans=0;
    for(int i=0;i<n;i++) ans+=l[i]*r[i];
    cout<<ans<<endl;
    
    return 0;
}