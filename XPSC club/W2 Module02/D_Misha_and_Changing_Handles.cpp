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
    int q;
    cin>>q;
    map<string,string>ans,has;
    while(q--)
    {
        string a,b;
        cin>>a>>b;
        if(has.find(a)!=has.end())
        {
            string s=has[a];
            ans[s]=b;
            has.erase(a);
            has[b]=s;
        }
        else
        {
            ans[a]=b;
            has[b]=a;
        }
    }
    cout<<has.size()<<endl;
    for(auto [a,b]:has) cout<<b<<" "<<a<<endl;
    return 0;
}