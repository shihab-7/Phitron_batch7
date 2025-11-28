#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long
int isprime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return i;
    }
    return n;
}
int main()
{
    shihab
    test
    {
        int l,r;
        cin>>l>>r;
        if(l<=3 && r<=3) cout<<-1<<endl;
        if(r-l>=1)
        {
            if(r%2==0) r--;
            cout<<r/2<<" "<<r/2<<endl;
        }
        if(isprime(l)==l) cout<<-1<<endl;
        else cout<<isprime(l)<<" "<<l-isprime(l)<<endl;
    }
    return 0;
}