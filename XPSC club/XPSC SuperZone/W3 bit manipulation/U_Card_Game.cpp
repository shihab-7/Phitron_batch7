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
        int cnt=0;
        for(auto a:s) if(a=='A') cnt++;
        if((s[0]=='A'&& s[n-1]=='A')||(s[n-2]=='A'&&s[n-1]=='A'))
        {
            cout<<"Alice"<<endl;
            continue;
        }
        if((s[0]=='B'&& s[n-1]=='B')||(s[n-2]=='B'&&s[n-1]=='B'))
        {
            cout<<"Bob"<<endl;
            continue;
        }
        if(cnt==n-1 &&s[0]=='A') cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
    return 0;
}