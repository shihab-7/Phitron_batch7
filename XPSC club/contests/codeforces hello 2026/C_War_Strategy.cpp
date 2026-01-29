#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

bool ok(int x,int y,int m)
{
    return max(x,y)-1+x+y<=m;
}

int main()
{
    shihab
    test
    {
        int n,m,k;
        cin>>n>>m>>k;
        int x=0,y=0;
        while(1)
        {
            bool f=false;
            if(x<k-1)
            {
                if(ok(x+1,y,m)) 
                {
                    x++;
                    f=true;
                }
            }
            if(y<n-k)
            {
                if(ok(x,y+1,m)) 
                {
                    y++;
                    f=true;
                }
            }
            if(!f) break;
        }
        cout<<x+y+1<<endl;
    }
    return 0;
}