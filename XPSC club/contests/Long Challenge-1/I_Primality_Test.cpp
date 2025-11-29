#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

bool isprime(int n)
{
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    shihab
    test
    {
        int n;
        cin>>n;
        if(isprime(n)) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}