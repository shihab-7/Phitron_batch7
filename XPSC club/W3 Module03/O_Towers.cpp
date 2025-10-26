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
    multiset<int>ms;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        auto it=ms.upper_bound(a);
        // cout<<*it<<" ";cout<<endl;
        if(it!=ms.end()) ms.erase(it);
        ms.insert(a);
    }
    // printv(ms);cout<<endl;
    cout<<ms.size()<<endl;
    return 0;
}