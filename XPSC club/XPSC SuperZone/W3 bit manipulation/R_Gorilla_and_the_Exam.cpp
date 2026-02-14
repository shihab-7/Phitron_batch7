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
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int ans=1;
        map<int,int>mp;
        for(auto a:v) mp[a]++;
        vector<int>frq;
        for(auto [a,b]:mp) frq.push_back(b);
        sort(frq.begin(),frq.end());
        int Dcnt=frq.size();
        for(int i=0;i<frq.size();i++)
        {
            if(k>=frq[i])
            {
                k-=frq[i];
                Dcnt--;
            }
            else break;
        }
        cout<<max(1,Dcnt)<<endl;
    }
    return 0;
}