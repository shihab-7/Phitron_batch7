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
    deque<int>ans;
    bool rev=false;
    for(int i=0;i<n;i++)
    {
        if(!rev) ans.push_back(v[i]);
        else ans.push_front(v[i]);
        rev=!rev;
    }
    if(rev) reverse(ans.begin(),ans.end());
    for(auto a:ans) cout<<a<<" ";
    cout<<endl;
    return 0;
}