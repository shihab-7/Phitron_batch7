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
    test
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<char>st;
        for(int i=0;i<n;i++) st.insert(s[i]);
        // printv(st);cout<<endl;
        string res="",tmp;
        for(auto i=st.begin();i!=st.end();i++)res+=*i;
        tmp=res;
        reverse(res.begin(),res.end());
        // cout<<res<<endl;
        map<char,char>mp;
        for(int i=0;i<res.size();i++) mp[tmp[i]]=res[i];
        // printmp(mp);cout<<endl;
        string ans="";
        for(int i=0;i<n;i++) ans+=mp[s[i]];
        cout<<ans<<endl;
    }
    return 0;
}