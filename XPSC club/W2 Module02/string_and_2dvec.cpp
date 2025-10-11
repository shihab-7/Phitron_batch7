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
    string s;
    cin>>s;
    cout<<s.substr(1, 3)<<endl; // substring
    cout<<s.substr(3)<<endl; // substring
    for(int i=0; i<s.size(); i++)
    {
        cout<<s.substr(i, 3)<<endl;
    }
    cout<<endl;
    for(int i=0; i<s.size(); i++)
    {
        cout<<s.substr(i)<<endl;
    }
    cout<<endl;
    vector<vector<int>> vec;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int m;
        cin>>m;
        vector<int> v(m);
        for(int j=0; j<m; j++) cin>>v[j];
        vec.push_back(v);
    }
    for(auto v:vec)
    {
        for(auto a:v) cout<<a<<" ";
        cout<<endl;
    }

    return 0;
}