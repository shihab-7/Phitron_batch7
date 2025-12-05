#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

const int B=30;

int main()
{
    shihab
    test
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        // int mxSetBit=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            // // cout<<__lg(v[i])<<endl;
            // mxSetBit=max(mxSetBit, __lg(v[i]));
        }
        vector<int>bits(B+1);
        for(int i=0;i<n;i++)
        {
            // cout<<v[i]<<" -> ";
            // for(int k=mxSetBit;k>=0;k--)
            // {
            //     if(((v[i]>>k)&1)) cout<<1<<" ";
            //     else cout<<0<<" ";
            // }
            for(int j=B;j>=0;j--)
            {
                if(((v[i]>>j)&1)) bits[j]++;
            }
            // cout<<endl;
        }
        int ans=0;
        for(int i=B;i>=0;i--)
        {
            if(bits[i]==n) ans+=(1ll<<i);
            else
            {
                int need=n-bits[i];
                if(k>=need) 
                {
                    ans+=(1ll<<i);
                    k-=need;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}