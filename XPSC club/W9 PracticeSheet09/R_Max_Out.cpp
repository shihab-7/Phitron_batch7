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
        if(s.size()<2) cout<<0<<endl;
        else
        {
            auto it=s.end();
            it--;
            int fst_mx=*it;
            it--;
            int snd_mx=*it;
            cout<<snd_mx%fst_mx<<endl;
        }
    }
    return 0;
}