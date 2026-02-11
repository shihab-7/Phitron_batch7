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
        vector<int>cnt(30);
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            cnt[__lg(a)]++;
        }
        ll ans=0;
         // msb same holei AND>=OR hoy
        // pair count korte hole linear pattern follow korle n(n+1)/2 diye kora jay but tar age n-- kore nite hoy or n(n-1)/2 diye kora jay
        for(int i=0;i<30;i++)
        {
            ans+=(1LL*cnt[i]*(cnt[i]-1))/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}