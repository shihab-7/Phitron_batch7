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
        int cf=0,a_cf=0, s_cnt=0;
        for(auto c:s)
        {
            if(c=='1') cf++;
            else a_cf++;
            if(cf>a_cf) s_cnt++;
        }
        cout<<s_cnt<<endl;
    }
    return 0;
}