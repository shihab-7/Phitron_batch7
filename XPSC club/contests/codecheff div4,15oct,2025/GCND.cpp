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
        vector<int>a(n);
        set<int>s;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        if(s.size()==1)cout<<*(s.begin())-1<<endl;
        else if(s.size()>2) cout<<*(s.rbegin())-1<<endl;
        else
        {
            int mn=*(s.begin());
            int mx=*(s.rbegin());
            for(int i=mx-1;i>=0;i--)
            {
                if(i!=mn)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}