#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

vector<int>allPal;
const int N=(1ll<<15);

bool isPal(int n)
{
    string s=to_string(n);
    int l=0, r=s.size()-1;
    while(l<r)
    {
        if(s[l]!=s[r]) return false;
        l++;
        r--;
    }
    return true;
}
void precompute()
{
    for(int i=0; i<N; i++)
    {
        if(isPal(i)) allPal.push_back(i);
    }
}

int main()
{
    shihab
    precompute();
    test
    {
        int n;
        cin>>n;
        vector<int>v(n), cnt(N+1);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            cnt[v[i]]++;
        }
        ll ans=n;
        for(int i=0; i<n; i++)
        {
            for(int j=0;j<allPal.size(); j++)
            {
                int cur=(v[i]^allPal[j]);
                ans+=cnt[cur];
            }
        }
        cout<<ans/2<< endl;
    }
    return 0;
}