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
        ll s,k,m;
        cin>>s>>k>>m;
        ll ans=0;
        ll flp_cnt=m/k;
        ll lst_flp=m%k;
        ll fst_hf;
        if(flp_cnt%2==0) fst_hf=s; 
        else fst_hf=min(s,k);
        ans=max(ans,fst_hf-lst_flp);
        cout<<ans<<endl;
    }
    return 0;
}