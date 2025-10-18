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
        ll min_cnt=0,total=0;
        vector<ll>tmp;
        for(int i=0;i<n;i++)
        {
            ll l=i, r=n-1-i;
            if(s[i]=='L')
            {
                if(r>l)
                {
                    min_cnt++;
                    total+=r;
                    tmp.push_back(r-l);
                }
                else total+=l;
            }
            else
            {
                if(l>r)
                {
                    min_cnt++;
                    total+=l;
                    tmp.push_back(l-r);
                }
                else total+=r;
            }
        }
        vector<ll>ans(n+1);
        for(int i=min_cnt;i<=n;i++)
        {
            ans[i]=total;
        }
        // printv(ans);cout<<endl;
        sort(tmp.begin(),tmp.end(),greater<int>());
        // printv(tmp);cout<<endl;
        for(int i=min_cnt-1;i>=1;i--)
        {
            total-=tmp.back();
            tmp.pop_back();
            ans[i]=total;
        }
        for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}