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
        int n,x,k;
        cin>>n>>x>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        sort(v.begin(),v.end(),greater<int>());
        // printv(v);cout<<endl;
        for(int i=0;i<k;i++)
        {
            v[i]=0;
            x+=100;
        }
        int pos=0;
        for(auto a:v)
        {
            if(a>x) pos++;
        }
        cout<<pos+1<<endl;
    }
    return 0;
}