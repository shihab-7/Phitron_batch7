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
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int sum=0;
        map<int,int>mp;
        for(int i=0;i<n;i++) mp[a[i]]=max(mp[a[i]],b[i]);
        for(auto [x,y]:mp) 
        {
            if(y>0) sum+=y;
        }
        cout<<sum<<endl;
    }
    return 0;
}