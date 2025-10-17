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
    map<string,bool>ump;
    vector<string>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=n-1;i>=0;i--)
    {
        if(!ump[v[i]])
        {
            ump[v[i]]=true;
            cout<<v[i]<<endl;
        }
    }
    return 0;
}