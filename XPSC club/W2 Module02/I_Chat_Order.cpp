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
    map<string,bool>mp;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(mp.find(s)!=mp.end()) mp[s]=true;
        else mp[s]=false;
    }
    for(auto a:mp) cout<<a.first<<endl;
    return 0;
}