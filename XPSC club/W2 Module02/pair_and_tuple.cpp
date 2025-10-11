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

    pair<int, int> p = {10, 20};
    pair<string, int> p2 = make_pair("Hello", 20);
    cout<<p.first<<" "<<p.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;

    auto [str, num] = p2; // structured binding (C++17)
    cout<<str<<" "<<num<<endl;

    tuple<int, string, double> t = {1, "Hello", 3.14}; // essa moto data type combine kora jay
    tuple<int, string, double> t2 = make_tuple(2, "World", 2.71);
    cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<endl;
    
    auto [i, s, d] = t2; // structured binding (C++17)
    cout<<i<<" "<<s<<" "<<d<<endl;

    return 0;
}