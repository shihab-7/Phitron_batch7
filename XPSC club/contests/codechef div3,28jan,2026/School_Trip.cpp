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
        int n,x,k;
        cin>>n>>x>>k;
        if(x%k==0) cout<<0<<endl;
        else
        {
            int rem=x%k;
            int add=k-rem;
            if(x+add<=n) cout<<min(add,rem)<<endl;
            else cout<<rem<<endl;
        }
    }
    return 0;
}