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
        vector<ll>v(n+1),pref(n+1);
        pref[0]=0;
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
            pref[i]=pref[i-1]+v[i];
        }
        string s;
        cin>>s;
        ll ans=0;
        int l=0,r=n-1;
        while(l<r)
        {
            while(s[l]!='L'&&l<n)l++;
            while(s[r]!='R'&&r>0)r--;
            if(l==n||r==0||l>=r)break;
            ans+=pref[r+1]-pref[l];
            l++;
            r--;
        }
        cout<<ans<<endl;
    }
    return 0;
}