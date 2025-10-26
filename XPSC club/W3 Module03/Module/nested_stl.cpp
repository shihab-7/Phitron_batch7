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
    map<int, set<int>> mp;
    set<int> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    mp[1]=s1;

    set<int> s2;
    s2.insert(15);  
    s2.insert(25);
    s2.insert(35);
    mp[2]=s2;
    for(auto [key, s]: mp)
    {
        cout<<key<<": ";
        for(auto val: s)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}