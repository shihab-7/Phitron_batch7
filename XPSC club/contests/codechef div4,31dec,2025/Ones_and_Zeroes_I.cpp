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
        int c1=0,c0=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0') c0++;
            else c1++;
            if(c1>=c0) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}