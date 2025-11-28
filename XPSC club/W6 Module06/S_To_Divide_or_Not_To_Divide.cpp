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
        int a,b,n;
        cin>>a>>b>>n;
        if(a%b==0) cout<<-1<<endl;
        else
        {
            int tmp=n-(n%a);
            if(n%a!=0) tmp+=a;
            if(tmp%b==0) tmp+=a;
            cout<<tmp<<endl;
        }
    }
    return 0;
}