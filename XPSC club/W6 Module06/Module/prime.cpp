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
    //naive approach O(n)
    // bool f=true;
    // for(int i=2;i<=n-1;i++)
    // {
    //     if(n%i==0)
    //     {
    //         f=false;
    //         break;
    //     }
    // }
    // if(f) cout<<"Prime"<<endl;
    // else cout<<"Not Prime"<<endl;

    //optimized approach O(sqrt(n))
    cout<<(isPrime(n)?"Prime":"Not Prime")<<endl;
    return 0;
}