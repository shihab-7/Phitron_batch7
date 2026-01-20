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
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        while(k--)
        {
            int tmp=v.front()+v.back();
            v.erase(v.begin());
            v.erase(v.end()-1);
            v.push_back(tmp);
        }
        for(auto a:v) cout<<a<<" ";
        cout<<endl;
    }
    return 0;
}