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
    int n;
    cin>>n;
    //o(n) approach
    // for(int i=1;i<=n;i++)
    // {
    //     if(n%i==0) cout<<i<<" ";
    // }
    //o(sqrt(n)) approach
    vector<int>divisors;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            // cout<<i<<" ";
            divisors.push_back(i);
            if(i!=n/i) 
            {
                // cout<<n/i<<" ";
                divisors.push_back(n/i);
            }
        }
    }
    sort(divisors.begin(),divisors.end());
    printv(divisors);

    return 0;
}