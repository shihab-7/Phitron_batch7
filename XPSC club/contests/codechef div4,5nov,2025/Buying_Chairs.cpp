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
        int w,p,k;
        cin>>w>>p>>k;
        int mx_w=min(w,k);
        int left=k-mx_w;
        int mx_p=min(p,left);
        cout<<mx_w*2+mx_p<<endl;
    }
    return 0;
}