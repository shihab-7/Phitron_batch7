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
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            v.push_back(val);
        }
        int cnt=0,req=1;
        bool f=false;
        while(v.size()>1)
        {
            vector<int>tmp;
            for(int i=0;i<v.size()-1;i+=2)
            {
                if(abs(v[i]-v[i+1])!=req) f=true;
                else
                {
                    if(v[i]>v[i+1]) cnt++;
                    tmp.push_back(min(v[i],v[i+1]));
                }
            }
            v=tmp;
            req*=2;
        }
        if(f) cout<<-1<<endl;
        else cout<<cnt<<endl;
    }
    return 0;
}