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

        set<int>one_idx;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1') one_idx.insert(i);
        }
        ll cnt0=0,cnt1=0,ans=0,mn=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0' && cnt0+1>cnt1)
            {
                auto it=one_idx.upper_bound(i);
                if(it!=one_idx.end())
                {
                    int id1=*it;
                    swap(s[i],s[id1]);
                    mn+=(id1-i);
                    one_idx.erase(id1);
                }
            }
            if(s[i]=='1') cnt1++;
            else cnt0++;
            if(cnt1>=cnt0) ans++;
        }
        cout<<ans<<" "<<mn<<endl;
    }
    return 0;
}