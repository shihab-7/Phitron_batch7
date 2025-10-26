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
    int n,q;
    cin>>n>>q;
    multiset<int>ms;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ms.insert(x);
    }
    while(q--)
    {
        int op;
        cin>>op;
        if(op==0)
        {
            int x;
            cin>>x;
            ms.insert(x);
        }
        else if(op==1)
        {
            cout<<*ms.begin()<<endl;
            ms.erase(ms.begin());
        }
        else if(op==2)
        {
            cout<<*ms.rbegin()<<endl;
            ms.erase(--ms.end());
        }
    }
    return 0;
}