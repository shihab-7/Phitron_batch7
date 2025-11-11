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
        for(int i=0;i<n;i++) cin>>v[i];
        int cnt1=0;
        for(int i=0;i<n;i++) if(v[i]==1) cnt1++;
        if(cnt1%2==0&& n%2==0) cout<<"YES"<<endl;
        else if(cnt1%2==1&& n%2==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}