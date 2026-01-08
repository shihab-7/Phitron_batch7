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
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        deque<int>dq;
        for(int i=0;i<n;i++) dq.push_back(a[i]);
        int cnt=0;
        while(dq.size()>1)
        {
            int x=dq.back();
            dq.pop_back();
            int y=dq.back();
            dq.pop_back();
            if(x==y) dq.push_front(x-y);
            else
            {
                dq.push_back(y);
                cnt++;
            }
        }
        cout<<cnt+dq.size()<<endl;
    }
    return 0;
}