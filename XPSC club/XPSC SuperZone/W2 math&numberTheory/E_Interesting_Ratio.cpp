#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

const int N=1e7+5;
vector<bool>prime(N+1,true);
vector<int>pr;
void sieve()
{
    for(int i=2;i*i<=N;i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<=N;j+=i) prime[j]=false;
        }
    }
    for(int i=2;i<=N;i++) if(prime[i]) pr.push_back(i);
}   

int main()
{
    shihab
    sieve();
    test
    {
        ll n;
        cin>>n;
        ll cnt=0;
        for(auto a:pr)
        {
            if(a>n) break;
            cnt+=(n/a);
        }
        cout << cnt << endl;
    }
    return 0;
}