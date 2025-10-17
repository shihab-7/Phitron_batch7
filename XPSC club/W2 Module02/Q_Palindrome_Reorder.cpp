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
    map<char,int>mp;
    for(auto a:s)mp[a]++;
    // printmp(mp);
    // cout<<endl;
    int odd_cnt=0;
    for(auto [a,b]:mp)
    {
        if(b%2==1) odd_cnt++;
    }
    if(odd_cnt>1) cout<<"NO SOLUTION"<<endl;
    else
    {
        string ans="",tmp="",odd_c="";
        for(auto [a,b]:mp)
        {
            if(b%2==1) odd_c=a; 
            for(int i=0;i<b/2;i++) ans+=a;
        }
        // cout<<ans<<" "<<odd_c;
        tmp=ans;
        reverse(tmp.begin(),tmp.end());
        cout<<ans+odd_c+tmp<<endl;
    }
    return 0;
}