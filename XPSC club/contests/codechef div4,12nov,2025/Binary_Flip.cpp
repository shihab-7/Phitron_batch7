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
        int cnt00=0,cnt11=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='0' && s[i]==s[i+1])cnt00++;
            if(s[i]=='1' && s[i]==s[i+1])cnt11++;
        }
        if(cnt11>=cnt00) cout<<0<<endl;
        else cout<<((cnt00-cnt11)+1)/2<<endl;
    }
    return 0;
}