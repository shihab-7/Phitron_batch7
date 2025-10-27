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
        int n,m,q;
        cin>>n>>m>>q;
        vector<int>tchr(m);
        for(int i=0;i<m;i++) cin>>tchr[i];
        sort(tchr.begin(),tchr.end());
        while(q--)
        {
            int pos;
            cin>>pos;
            if(pos<tchr[0]) cout<<tchr[0]-1<<endl;
            else if(pos>tchr[m-1]) cout<<n-tchr[m-1]<<endl;
            else
            {
                auto it=lower_bound(tchr.begin(),tchr.end(),pos);
                auto it2=it;
                it--;
                int lft=*it2 , rgt=*it, mid=(lft+rgt)/2;
                cout<<min(abs(mid-lft),abs(mid-rgt))<<endl;
            }   
        }
    }
    return 0;
}