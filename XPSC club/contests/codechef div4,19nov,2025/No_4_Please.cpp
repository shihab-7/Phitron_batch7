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
        int cnt1=0,cnt2=0,cnt3=0;
        for(auto a:v)
        {
            if(a==1) cnt1++;
            if(a==2) cnt2++;
            if(a==3) cnt3++;
        }
        int p1=min(cnt1,cnt3),p2=max(0,cnt2-1);
        cout<<p1+p2<<endl;
    }
    return 0;
}