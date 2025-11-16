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
        int n,s;
        cin>>n>>s;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int l=0,sum=0,mx=-1;
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
            while(sum>s)
            {
                sum-=v[l];
                l++;
            }
            if(sum==s) mx=max(mx,i-l+1);
        }
        if(mx==-1) cout<<mx<<endl;
        else cout<<n-mx<<endl;
    }
    return 0;
}