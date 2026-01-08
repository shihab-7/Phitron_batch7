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
        for(int i=0;i<n-2;i++)
        {
            if(s[i]=='0'&&s[i+1]=='1') cnt++;
        }
        if(s[0]=='1') cnt++;
        if(s[n-2]=='0') cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}