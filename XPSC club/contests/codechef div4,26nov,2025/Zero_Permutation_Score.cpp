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
        int cnt=0;
        int scr=0;
        if(n<3) cout<<0<<endl;
        else
        {
            for(int i=n-1;i>=1;i--)
            {
                scr=(i-1)/2;
                // cout<<scr<<endl;
                cnt+=scr;
                scr--;
            }
            cout<<cnt<<endl;
        }
        // cout<<endl;
    }
    return 0;
}