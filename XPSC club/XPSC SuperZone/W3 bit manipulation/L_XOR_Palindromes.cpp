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
        string ans;
        for(int i=0;i<=n;i++) ans+='0';
        int m_cnt=0;
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-i-1]) m_cnt++;
        }
        if(n%2==0)
        {
            for(int i=m_cnt;i<=n-m_cnt;i+=2) ans[i]='1';
        }
        else 
        {
            for(int i=m_cnt;i<=n-m_cnt;i++) ans[i]='1';
        }
        cout<<ans<<endl;
    }
    return 0;
}