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
        vector<ll>a(n),b(n-1);
        for(int i=0;i<n-1;i++) cin>>b[i];
        a[0]=b[0];
        a[n-1]=b[n-2];
        for(int i=1;i<n-1;i++) a[i]=(b[i] | b[i-1]);
        bool f=false;
        for(int i=0;i<n-1;i++)
        {
            if(b[i]!=(a[i] & a[i+1]))
            {
                f=true;
                break;
            }
        }
        if(f) cout<<-1<<endl;
        else
        {
            for(auto x:a) cout<<x<<" ";
            cout<<endl;
        }
    }
    return 0;
}