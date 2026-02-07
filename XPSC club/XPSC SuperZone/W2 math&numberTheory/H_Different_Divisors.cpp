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
        ll d;
        cin>>d;

        auto prime=[&](ll n)
        {
            if(n<2) return false;
            for(ll i=2;i*i<=n;i++)
            {
                if(n%i==0) return false;
            }
            return true;
        };
        ll a=d+1;
        while(!prime(a)) a++;
        ll b=a+d;
        while(!prime(b)) b++;
        cout<<a*b<<endl;
    }
    return 0;
}