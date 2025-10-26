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
        for(int i=0;i<n;i++) cin>>v[i];
        set<int>s;
        for(int i=0;i<n;i++) s.insert(v[i]);
        int l=0,r=n-1;
        while(l<r)
        {
            if(v[l]==*s.begin()||v[l]==*s.rbegin())
            {
                auto it=s.find(v[l]);
                l++;
                s.erase(it);
            }
            else if(v[r]==*s.begin() || v[r]==*s.rbegin())
            {
                auto it=s.find(v[r]);
                r--;
                s.erase(it);
            }
            else break;
        }
        if(l<r) cout<<l+1<<" "<<r+1<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}