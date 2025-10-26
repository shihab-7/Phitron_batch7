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
    int q;
    cin>>q;
    set<int>s;
    while(q--)
    {
        int op,x;
        cin>>op>>x;
        if(op==1) s.insert(x);
        else if(op==2)
        {
            if(s.find(x)!=s.end())s.erase(x);
        }
        else if(op==3)
        {
            if(s.count(x))cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}