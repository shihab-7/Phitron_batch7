#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

const int mxN=30+9;
vector<int>allPrimes;
void sieve()
{
    vector<bool>isPrime(mxN+1,true);
    for(int i=2;i*i<=mxN;i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i;j<=mxN;j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
    for(int i=2;i<=mxN;i++)
    {
        if(isPrime[i]) allPrimes.push_back(i);
    }
}


int main()
{
    shihab
    // any number n can be represented as a product of prime numbers except 1
    // 30 = 2 * 3 * 5
    //using sieve we can apply prime factorization
    sieve();
    int n;
    cin>>n;
    map<int,int>cnt;
    int idx=0;
    while(n>1)
    {
        while(1)
        {
            if(n%allPrimes[idx]!=0) break;
            cnt[allPrimes[idx]]++;
            n/=allPrimes[idx];
        }
        idx++;
    }
    for(auto [x,y]:cnt)
    {
        cout<<x<<"->"<<y<<endl;
    }
    //complexity: O(n log log n + k)
    return 0;
}