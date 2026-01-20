#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

bool check(char c)
{
    return (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
}

int main()
{
    shihab
    test
    {
        string s;
        cin>>s;
        if(!check(s[0])&&check(s[1])&&!check(s[2])&&check(s[3])&&!check(s[4])&&check(s[5])&&!check(s[6])&&!check(s[7])) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}