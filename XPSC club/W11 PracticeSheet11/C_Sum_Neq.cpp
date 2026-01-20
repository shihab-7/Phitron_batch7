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
        if(n==4)
        {
            if(v[0]+v[1]==v[2]+v[3]) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else
        {

            bool f=true;
            for(int i=1;i<n;i++)
            {
                if(v[0]!=v[i])
                {
                    f=false;
                    break;
                }
            }
            if(f) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}