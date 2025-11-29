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
        string s1,s2;
        cin>>s1>>s2;
        int s1cnt1=0,s1cnt0=0,s2cnt1=0,s2cnt0=0;
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='1') s1cnt1++;
            else s1cnt0++;
        }
        for(int i=0;i<n;i++)
        {
            if(s2[i]=='1') s2cnt1++;
            else s2cnt0++;
        }
        if(s1cnt1==s2cnt1 && s1cnt0==s2cnt0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}