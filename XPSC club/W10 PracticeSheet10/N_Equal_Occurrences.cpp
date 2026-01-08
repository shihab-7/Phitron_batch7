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
        map<int,int> mp,mp2;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mp[x]++;
            mp2[mp[x]]++;
        }
        int most=0;
        for(auto a:mp2)
        {
            most=max(most,a.first*a.second);
        }
        cout<<most<<endl;
    }
    return 0;
}