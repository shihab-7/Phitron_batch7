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
        int n,m;
        string s,c;
        cin>>n>>m>>s;
        set<int>se;
        for(int i=0;i<m;i++)
        {
            int idx;
            cin>>idx;
            se.insert(idx);
        }
        cin>>c;
        sort(c.begin(),c.end());
        int i=0;
        for(auto x:se)
        {
            s[x-1]=c[i];
            i++;
        }
        cout<<s<<endl;
    }
    return 0;
}