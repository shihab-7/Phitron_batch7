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
        int x,y,mx=1,spd=0;
        cin>>x>>y;
        spd=x/y;
        for(int i=2;i<=n;i++)
        {
            cin>>x>>y;
            if(x/y>spd)
            {
                spd=x/y;
                mx=i;
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}