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
        int ans=1e9;
        for(char c='a';c<='z';c++)
        {
            int l=0,r=n-1;
            int rmv=0;
            while(l<r)
            {
                if(s[l]==s[r]) l++ , r--;
                else if(s[l]==c) l++ , rmv++;
                else if(s[r]==c) r-- , rmv++;
                else
                {
                    rmv=1e9;
                    break;
                }
            }
            ans=min(ans,rmv);
        }
        if(ans==1e9) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}