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
        int n,k;
        cin>>n>>k;
        string s,a;
        cin>>s;
        ll ans=(1ll*n*k)-1;
        for(auto c:s)
        {
            if(c!='I') a.push_back(c);
        }
        if(a.empty()) cout<<ans<<endl;
        else
        {
            int cnt=0;
            for(int i=0;i<a.size()-1;i++)
            {
                if(a[i]!=a[i+1]) cnt++;
            }
            ll rmv=1ll*cnt*k;
            if(a.front()!=a.back()) rmv+=(k-1);
            ans-=rmv;
            cout<<ans<<endl;
        }
    }
    return 0;
}