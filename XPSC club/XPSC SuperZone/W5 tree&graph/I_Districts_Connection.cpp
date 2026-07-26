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
        vector<int>v(n+1);
        for(int i=1; i<=n; i++) cin>>v[i];

        bool f=false;
        for(int i=1; i<=n; i++)
        {
            if(v[1]!=v[i])
            {
                f=true;
                break;
            }
        }
        if(f)
        {
            cout<<"YES"<<endl;
            int dst=-1;
            for(int i=2; i<=n; i++)
            {
                if(v[1]!=v[i])
                {
                    cout<<1<<" "<<i<<endl;
                    dst=i;
                }
            }
            for(int i=2; i<=n; i++)
            {
                if(v[1]==v[i])
                {
                    cout<<dst<<" "<<i<<endl;
                }
            }
        }
        else cout<<"NO"<<endl;

    }
    return 0;
}