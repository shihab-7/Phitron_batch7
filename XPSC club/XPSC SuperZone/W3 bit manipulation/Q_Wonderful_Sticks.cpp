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
        vector<int>ans;
        int l=1,r=n;
        for(int i=n-2;i>=0;i--)
        {
            if(s[i]=='<') ans.push_back(l++);
            else ans.push_back(r--);
        }
        ans.push_back(l);
        reverse(ans.begin(),ans.end());
        for(auto a:ans) cout<<a<<" ";
        cout<<endl;
    }
    return 0;
}