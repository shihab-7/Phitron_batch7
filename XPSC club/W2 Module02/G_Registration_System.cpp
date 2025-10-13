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
    int n;
    cin>>n;
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(mp.find(s)!=mp.end())
        {
            mp[s]++;
            string s1=s+to_string(mp[s]);
            cout<<s1<<endl;
            mp[s1]=0;
        }
        else
        {
            cout<<"OK"<<endl;
            mp[s]=0;
        }
    }
    // printmp(mp);
    return 0;
}