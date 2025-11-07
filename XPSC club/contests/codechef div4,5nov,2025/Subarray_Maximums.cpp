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
        string s;
        cin>>s;
        vector<int>v;
        if(s[0]=='0'||s[n-1]=='0')
        {
            cout<<-1<<endl;
            continue;
        }
        for(int i=0;i<n;i++)
        {
            v.push_back(i+1);
        }
        for(int i=1;i<n-1;i++)
        {
            if(s[i]=='0') swap(v[i],v[i+1]);
        }
        for(auto a:v)cout<<a<<" ";
        cout<<endl;
    }
    return 0;
}