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
        string s1,s2;
        cin>>s1>>s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}