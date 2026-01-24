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
        vector<int>a;
        a.push_back((1<<n)-1);
        for(int i=n-1;i>=0;i--)
        {
            vector<int>temp;
            for(auto val:a) temp.push_back(val^(1<<i));
            sort(temp.begin(),temp.end());
            for(auto val:temp) a.push_back(val);
        }
        for(auto val:a) cout<<val<<" ";
        cout<<endl;
    }
    return 0;
}