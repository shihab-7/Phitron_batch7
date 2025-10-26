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
        cin.ignore();
        int n,k;
        cin>>n>>k;
        map<int,set<int>>mp;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            mp[x].insert(i);
        }
        while(k--)
        {
            int s,d;
            cin>>s>>d;
            if(mp.find(s)==mp.end()||mp.find(d)==mp.end()) cout<<"NO"<<endl;
            else
            {
                int l= *mp[s].begin();
                int r= *mp[d].rbegin();
                if(l<r) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}