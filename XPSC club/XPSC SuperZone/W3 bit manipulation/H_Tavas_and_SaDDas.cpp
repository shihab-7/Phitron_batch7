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
    string s;
    cin>>s;
    int n=s.size();
    ll smlnum=(1LL<<n)-2, b_val=0;
    for(int i=0;i<n;i++)
    {
        b_val<<=1;
        if(s[i]=='7') b_val++;
    }
    cout<<smlnum+b_val+1<<endl;
    return 0;
}