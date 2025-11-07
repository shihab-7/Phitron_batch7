//akta array diye kisu queries dibe
//prottek query te 2 ta index dibe ar ekta value dibe
//ei value ta oi 2 ta index er moddhe sob gulo element er sathe jog hobe
//last e updated array ta print korte hobe, normally update korte gele O(n^2) hoy 
//but difference array use kore O(n+m) te kora jabe, jeita O(n) e
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
    int n,q;
    cin>>n>>q;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    vector<int>diff(n+2), pref(n+2);
    for(int i=1;i<=q;i++)
    {
        int l,r,val;
        cin>>l>>r>>val;
        diff[l]+=val;
        diff[r+1]-=val;
    }
    for(int i=1;i<=n;i++)
    {
        pref[i]=pref[i-1]+diff[i];
    }
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]+pref[i]<<" ";
    }
    cout<<endl;
    return 0;
}