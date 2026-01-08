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
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        while(k--)
        {
            int sm=a.front()+a.back();
            a.erase(a.begin());
            a.pop_back();
            a.push_back(sm);
        }
        for(auto x:a) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}