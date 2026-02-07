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

    //O(2^n*n)

    for(int mask=0;mask<(1<<n);mask++)
    {
        cout<<mask<<" : ";
        for(int j=0;j<n;j++)
        {
            if((mask>>j)&1) cout<<1<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}