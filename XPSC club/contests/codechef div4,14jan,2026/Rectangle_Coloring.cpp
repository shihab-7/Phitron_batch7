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
        ll l,w,r,g,b;
        cin>>l>>w>>r>>g>>b;

        int ans=6;
        vector<ll>side={l,w,l,w};
        vector<ll>clr={r,g,b};

        bool find5=false;
        for(int msk=1;msk<=15;msk++)
        {
            ll sum=0;
            for(int i=0;i<4;i++)
            {
                if(msk&(1<<i)) sum+=side[i];
            }
            for(int i=0;i<3;i++)
            {
                if(sum==clr[i])
                {
                    find5=true;
                    break;
                }
            }
            if(find5) break;
        }
        if(find5) ans=5;

        bool find4=false;
        for(int i=0;i<3;i++)
        {
            if(2*l==clr[i]&&(clr[(i+1)%3])==w &&clr[(i+2)%3]==w)
            {
                find4=true;
                break;
            }
            if(2*w==clr[i]&&(clr[(i+1)%3])==l &&clr[(i+2)%3]==l)
            {
                find4=true;
                break;
            }
            if(l+w==clr[i]&&((clr[(i+1)%3])==l&&clr[(i+2)%3]==w)||(clr[(i+1)%3])==w&&clr[(i+2)%3]==l)
            {
                find4=true;
                break;
            }
        }
        if(find4) ans=4;
        cout<<ans<<endl;
    }
    return 0;
}