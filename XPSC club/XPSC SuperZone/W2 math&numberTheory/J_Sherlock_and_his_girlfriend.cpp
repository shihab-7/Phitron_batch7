#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

const int N=1e6+10;
vector<bool>prime(N,true);
void sieve()
{
    for(int i=2;i*i<N;i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<N;j+=i)
            {
                prime[j]=false;
            }
        }
    }
}

int main()
{
    shihab
    sieve();
    // between two prime none can be a divisor of the other
    // 1 is not a prime or a composite number
    int n;
    cin>>n;
    if(n<=2)
    {
        cout<<1<<endl;
        for(int i=0;i<n;i++) cout<<1<<" ";
        cout<<endl;
    }
    else
    {
        cout<<2<<endl;
        for(int i=2;i<=n+1;i++)
        {
            if(prime[i]) cout<<1<<" ";
            else cout<<2<<" ";
        }
        cout<<endl;
    }
    return 0;
}