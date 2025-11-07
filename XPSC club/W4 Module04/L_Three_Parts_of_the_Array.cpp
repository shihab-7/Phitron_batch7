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
    for(int i=0;i<n;i++)cin>>v[i];
    int l=0, r=n-1;
    ll sum1=0,sum3=0,res=0;
    while(l<=r)
    {
        if(sum1<sum3)
        {
            sum1+=v[l];
            l++;
        }
        else
        {
            sum3+=v[r];
            r--;
        }
        if(sum1==sum3) res=sum1;
    }
    cout<<res<<endl;
    return 0;
}