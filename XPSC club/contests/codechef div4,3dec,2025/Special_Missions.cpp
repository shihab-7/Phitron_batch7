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
        int n,c;
        cin>>n>>c;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        string s;
        cin>>s;
        int sum=0, sum2=0;
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
            if(s[i]=='0') sum2+=v[i];
        }
        int res=sum2;
        if(sum2>=c)
        {
            res=max(res,sum-c);
            cout<<res<<endl;
        }
        else cout<<res<<endl;
    }
    return 0;
}