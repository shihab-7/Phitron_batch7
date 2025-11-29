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
        int n,m,k;
        cin>>n>>m>>k;
        int need=min(n,m);
        int cmpl=max(n,m);
        while(need!=cmpl)
        {
            need+=1;
            k--;
            if(k==0) break;
        }
        cout<<cmpl-need<<endl;
    }
    return 0;
}