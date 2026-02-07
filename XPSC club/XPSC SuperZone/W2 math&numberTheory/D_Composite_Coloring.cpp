#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

vector<int>mPrime={2,3,5,7,11,13,17,19,23,29,31};
int main()
{
    shihab
    test
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        map<int,vector<int>>mp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<11;j++)
            {
                if(v[i]%mPrime[j]==0)
                {
                    mp[mPrime[j]].push_back(i);
                    break;
                }
            }
        }
        vector<int>ans(n);
        int clr=1;
        for(auto [x,y]:mp)
        {
            for(auto pos:y)
            {
                ans[pos]=clr;
            } 
            clr++;
        }
        cout<<mp.size()<<endl;
        for(int i=0;i<n;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}