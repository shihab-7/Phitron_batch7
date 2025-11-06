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
        int n,x;
        cin>>n>>x;
        int p=0;
        for(int i=1;i<=n;i++)
        {
            if(i>=x)
            {
                int per_p=i-x;
                p+=per_p;
            }
        }
        cout<<p<<endl;
    }
    return 0;
}