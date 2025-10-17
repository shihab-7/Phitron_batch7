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
        set<int>s;
        for(int i=0;i<n;i++) cin>>v[i];
        int cnt=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s.find(v[i])!=s.end()) break;
            s.insert(v[i]);
            cnt++;
        }
        cout<<n-cnt<<endl;
    }
    return 0;
}