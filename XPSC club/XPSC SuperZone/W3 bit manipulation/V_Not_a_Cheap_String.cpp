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
        string s,w;
        cin>>w;
        s=w;
        int n;
        cin>>n;
        sort(s.begin(),s.end());
        string tmp="";
        int x=0;
        for(int i=0;i<s.size();i++)
        {
            x=(s[i]-'a')+1;
            if(x<=n) 
            {
                tmp+=s[i];
                n-=x;
            }
        }
        map<char,int>mp;
        for(auto a:tmp) mp[a]++;
        for(int i=0;i<w.size();i++)
        {
            if(mp[w[i]]>0)
            {
                cout<<w[i];
                mp[w[i]]--;
            }
        }
        cout<<endl;
    }
    return 0;
}