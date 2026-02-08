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
        ll b,g,x,y,n;
        cin>>b>>g>>x>>y>>n;
        if(x+y>n) cout<<-1<<endl;
        else
        {
            ll mn_req=((b+g)+(n-1))/n;
            ll mx_av=min(b/x,g/y);
            if(mn_req>mx_av) cout<<-1<<endl;
            else cout<<mn_req<<endl;
        }
    }
    return 0;
}