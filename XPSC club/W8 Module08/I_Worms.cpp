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
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=1;i<n;i++) v[i]+=v[i-1];
    int m;
    cin>>m;
    while(m--)
    {
        int x;
        cin>>x;
        int indx=lower_bound(v.begin(),v.end(),x)-v.begin();
        cout<<indx+1<<endl;
    }
    return 0;
}