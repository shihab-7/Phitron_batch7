#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

bool cmp(pair<int,int>a, pair<int,int>b)
{
    if(a.first==b.first) return a.second<b.second;
    return a.first>b.first;
}
int main()
{
    shihab
    test
    {
        int n;
        cin>>n;
        vector<pair<int,int>>v;
        for(int i=1;i<=n;i++)
        {
            int scr=__gcd(i,n);
            v.push_back({scr,i});
        }
        sort(v.begin(),v.end(),cmp);
        for(auto a:v) cout<<a.second<<" ";
        cout<<endl;
    }
    return 0;
}