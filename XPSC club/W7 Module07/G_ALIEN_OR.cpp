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
        int n,k;
        cin>>n>>k;
        map<string,bool>mp;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            mp[s]=true;
        }
        string s;
        bool f=true;
        for(int i=0;i<k;i++) s.push_back('0');
        for(int i=0;i<k;i++)
        {
            s[i]='1';
            if(!mp[s])
            {
                f=false;
                break;
            }
            s[i]='0';
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}