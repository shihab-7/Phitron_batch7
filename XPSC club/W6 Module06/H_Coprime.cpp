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
        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            mp[x]=i;
        }
        int mx=INT_MIN;
        for(auto [a1,b1]:mp)
        {
            for(auto [a2,b2]:mp)
            {
                if(__gcd(a1,a2)==1) mx=max(mx,b1+b2);
            }
        }
        if(mx==INT_MIN) cout<<-1<<endl;
        else cout<<mx<<endl;
    }
    return 0;
}