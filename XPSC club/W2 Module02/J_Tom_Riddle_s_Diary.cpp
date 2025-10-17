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
    set<string>s;
    while(n--)
    {
        string nm;
        cin>>nm;
        if(s.find(nm)==s.end())
        {
            cout<<"NO"<<endl;
            s.insert(nm);
        }
        else cout<<"YES"<<endl;
    }
    return 0;
}