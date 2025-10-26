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
        int m;
        cin>>m;
        while(m--)
        {
            string s;
            cin>>s;
            if(s.size()!=n) cout<<"NO"<<endl;
            else
            {
                set<pair<char,int>>st;
                set<char>cns;
                set<int>cnv;
                for(int i=0;i<n;i++)
                {
                    st.insert({s[i],v[i]});
                    cns.insert(s[i]);
                    cnv.insert(v[i]);
                }
                if(st.size()==cns.size()&&st.size()==cnv.size()) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;

            }
        }
    }
    return 0;
}