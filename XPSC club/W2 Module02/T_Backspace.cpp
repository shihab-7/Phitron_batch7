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
    string s,ans="";
    cin>>s;
    for(auto c:s)
    {
        if(c=='<')
        {
            if(!ans.empty()) ans.pop_back();
        }
        else ans+=c;
    }
    cout<<ans<<endl;
    return 0;
}