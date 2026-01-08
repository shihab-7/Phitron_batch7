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
        ll x,y;
        cin>>x>>y;
        if(__gcd(x,y)>1) cout<<0<<endl;
        else
        {
            int cnt=0;
            while(1)
            {
                cnt++;
                if(__gcd(x++,y)>1 || __gcd(x,y++)>1) break;
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}