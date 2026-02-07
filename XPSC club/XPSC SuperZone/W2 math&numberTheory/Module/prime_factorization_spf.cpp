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
    // SPF: Smallest Prime Factorization
    // the smallest divisor of a number n is always a prime number
    // 18 = 2 , 15 = 3

    int n;
    cin>>n;
    map<int,int>cnt;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            cnt[i]++;
            n/=i;
        }
    }
    if(n>1) cnt[n]++; // if n is greater than 1 then it is a prime number
    for(auto [x,y]:cnt)
    {
        cout<<x<<"->"<<y<<endl;
    }
    // complexity: O(sqrt(n))
    return 0;
}