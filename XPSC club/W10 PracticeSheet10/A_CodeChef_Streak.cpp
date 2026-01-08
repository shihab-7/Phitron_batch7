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
        vector<int>o(n),a(n);
        for(int i=0;i<n;i++) cin>>o[i];
        for(int i=0;i<n;i++) cin>>a[i];

        int o_st=0,a_st=0,o_max=0,a_max=0;
        for(int i=0;i<n;i++)
        {
            if(o[i]>0)
            {
                o_st++;
                o_max=max(o_max,o_st);
            }
            else o_st=0;

            if(a[i]>0)
            {
                a_st++;
                a_max=max(a_max,a_st);
            }
            else a_st=0;
        }
        if(o_max>a_max) cout<<"Om"<<endl;
        else if(a_max>o_max) cout<<"Addy"<<endl;
        else cout<<"Draw"<<endl;
    }
    return 0;
}