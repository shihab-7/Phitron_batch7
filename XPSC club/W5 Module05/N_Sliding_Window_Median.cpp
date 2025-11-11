#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

int main()
{
    shihab
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    int l=0,r=0;
    pbds<pair<int,int>>s;
    while(r<n)
    {
        s.insert({a[r],r});
        if(r-l+1==k)
        {
            int pos=k/2;
            if(k%2==0) pos--;
            auto it=s.find_by_order(pos);
            cout<<it->first<<" ";
            s.erase({a[l],l});
            l++;
        }
        r++;
    }
    return 0;
}