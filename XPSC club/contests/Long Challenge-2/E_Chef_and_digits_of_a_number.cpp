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
        string s;
        cin>>s;
        int cnt0=0,cnt1=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0') cnt0++;
            if(s[i]=='1') cnt1++;
        }
        if(cnt0==1 || cnt1==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}