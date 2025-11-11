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
        vector<char>v(6);

        for(int i=0;i<6;i++) cin>>v[i];
        bool flag=false;
        for(int i=0;i<6;i++)
        {
            if(v[i]=='W'&&v[i+1]=='W'&&v[i+2]=='W') flag=true;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}