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
        vector<int>v(n),pos;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==i+1) pos.push_back(i);
        }
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]==i+1)
            {
                swap(v[i],v[i+1]);
                ans++;
            }
        }
        if(v[n-1]==n) ans++;
        cout<<ans<<endl;
    }
    return 0;
}