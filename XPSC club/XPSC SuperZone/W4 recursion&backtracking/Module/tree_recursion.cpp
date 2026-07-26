#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

void print(int n)
{
    if(n==0) return;
    cout<<n<<" ";
    print(n-1);
    print(n-1);
}

int main()
{
    shihab
    int n;
    cin>>n;
    print(n);
    return 0;
}