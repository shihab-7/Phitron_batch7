#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

bool isPrime(int n)
{
    if(n==1) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    shihab
    int n;
    cin>>n;
    if(isPrime(n)) cout<<1<<endl;
    else if(n%2==0) cout<<2<<endl;
    else
    {
        if(isPrime(n-2)) cout<<2<<endl;
        else cout<<3<<endl;
    }
    return 0;
}