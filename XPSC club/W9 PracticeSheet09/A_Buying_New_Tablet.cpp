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
        int n,b;
        cin>>n>>b;
        vector<int>p(n),w(n),h(n);
        for(int i=0;i<n;i++) cin>>w[i]>>h[i]>>p[i];
        int area=0;
        bool f=false;
        for(int i=0;i<n;i++)
        {
            if(p[i]<=b)
            {
                area=max(area,w[i]*h[i]);
                f=true;
            }
        }
        if(f) cout<<area<<endl;
        else cout<<"no tablet"<<endl;
    }
    return 0;
}