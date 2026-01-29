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
        if(n<=2) cout<<-1<<endl;
        else
        {
            if(n%2==1)
            {
                for(int i=1;i<=n;i++) cout<<i<<" ";
                cout<<endl;
            }
            else
            {
                for(int i=1;i<=n-3;i++) cout<<i<<" ";
                cout<<n<<" "<<n-2<<" "<<n-1;
                cout<<endl;
            }
        }
    }
    return 0;
}