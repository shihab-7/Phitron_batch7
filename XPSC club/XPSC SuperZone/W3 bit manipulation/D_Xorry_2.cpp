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
    auto kthBit_on=[&](int n,int k)
    {
        return ((n>>k)&1);
    };
    test
    {
        int val;
        cin>>val;
        int MSB=__lg(val),B=(1<<MSB),A=(val^B), sum=B,cnt=0;
        for(int k=0;k<=MSB;k++)
        {
            if(sum+(1<<k)<=val && !kthBit_on(A,k)&& !kthBit_on(B,k))
            {
                cnt++;
                sum+=(1<<k);
            }
        }
        int ans=(1<<cnt);
        cout<<ans<<endl;
    }
    return 0;
}