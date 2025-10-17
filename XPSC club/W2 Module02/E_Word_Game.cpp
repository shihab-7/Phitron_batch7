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
        map<string, vector<int>>mp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<n;j++)
            {
                string s;
                cin>>s;
                mp[s].push_back(i);
            }
        }
        vector<int>res(3);
        for(auto a:mp)
        {
            if(a.second.size()==1) res[a.second[0]]+=3;
            if(a.second.size()==2)
            {
                res[a.second[0]]++;
                res[a.second[1]]++;
            }
        }
        for(auto x:res) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}