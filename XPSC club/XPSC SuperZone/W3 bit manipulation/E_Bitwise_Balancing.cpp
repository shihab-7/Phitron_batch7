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
    auto Bit_on=[&](ll n,int k)
    {
        return (n|(1LL<<k));
    };
    auto Bit_off=[&](ll n,int k)
    {
        return (n&(~(1LL<<k)));
    };
    auto kthBit_on=[&](ll n,int k)
    {
        return ((n>>k)&1);
    };
    test
    {
        ll b,c,d,a=0;
        cin>>b>>c>>d;
        a=b;
        int msb=max({__lg(b),__lg(c),__lg(d)});
        for(int k=0;k<=msb;k++)
        {
            if(!kthBit_on(b,k)&& kthBit_on(d,k)) a=Bit_on(a,k);
            if(kthBit_on(c,k)&& kthBit_on(d,k)) a=Bit_off(a,k);
        }
        if((a|b)-(a&c)==d) cout<<a<<endl;
        else cout<<-1<<endl;    
    }
    return 0;
}