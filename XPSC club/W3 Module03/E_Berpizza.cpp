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
    set<pair<int,int>>s;
    multiset<pair<int,int>>ms;
    vector<int>ans;
    int c_no=1;
    for(int i=1;i<=n;i++)
    {
        int q;
        cin>>q;
        if(q==1)
        {
            int m;
            cin>>m;
            s.insert({c_no,m});
            ms.insert({m,-c_no});
            c_no++;
        }
        else if(q==2)
        {
            int pos=s.begin()->first, money=s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ms.erase({money,-pos});
            
        }
        else if(q==3)
        {
            int pos= -ms.rbegin()->second, money=ms.rbegin()->first;
            ans.push_back(pos);
            ms.erase(--ms.end());
            s.erase({pos,money});
        }
    }
    for(auto a:ans) cout<<a<<" ";
    cout<<endl;
    return 0;
}