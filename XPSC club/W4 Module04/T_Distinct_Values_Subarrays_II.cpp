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
    int n,k;
    cin>>n>>k;
    map<int,int>frq;
    int cnt=0;
    ll ans=0;
    int a[n+1];
    for(int j=1,i=1; j<=n; j++)
    {
        cin>>a[j];
        frq[a[j]]++;
        if(frq[a[j]]==1) cnt++;
        while(cnt>k)
        {
            frq[a[i]]--;
            if(frq[a[i]]==0) cnt--;
            i++;
        }
        ans+=(j-i+1);
    }
    cout<<ans<<endl;
    return 0;
}