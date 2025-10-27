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
        int plr1=0,plr2=0;
        for(int i=0;i<n;i++)
        {
            if((s1[i]=='R'&&s2[i]=='S')||(s1[i]=='S'&&s2[i]=='P')||(s1[i]=='P'&&s2[i]=='R')) plr1++;
            else if((s2[i]=='R'&&s1[i]=='S')||(s2[i]=='S'&&s1[i]=='P')||(s2[i]=='P'&&s1[i]=='R')) plr2++;
        }
        // cout<<plr1<<" "<<plr2<<endl;
        if(plr1>plr2)cout<<0<<endl;
        else cout<<plr2-plr1<<endl;
    }
    return 0;
}