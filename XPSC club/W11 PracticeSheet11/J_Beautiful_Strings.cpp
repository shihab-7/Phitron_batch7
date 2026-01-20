#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

const int MOD=1e9+7;

int main()
{
    shihab
    test
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int>mp;
        for(int i=0;i<n;i++) mp[s[i]]++;
        ll cnt=1;
        for(auto [x,y]:mp)
        {
            cnt*=(y+1);
            cnt%=MOD;
        }
        cout<<cnt-1<<endl;
    }
    return 0;
}