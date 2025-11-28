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
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];

        vector<int>res;
        for(auto x:v)res.push_back(x);
        int mn=0;
        if(v[0]==-1&&v[n-1]==-1)
        {
            res[0]=0;
            res[n-1]=0;
            mn=0;
        }
        else if(v[0]==-1)
        {
            res[0]=v[n-1];
            mn=0;
        }
        else if(v[n-1]==-1)
        {
            res[n-1]=v[0];
            mn=0;
        }
        else mn=abs(v[0]-v[n-1]);
        for(int i=0;i<n;i++)
        {
            if(res[i]==-1) res[i]=0;
        }
        cout<<mn<<endl;
        for(auto x:res)cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}