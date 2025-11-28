#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

int fnc(int n)
{
    int cnt=0;
    while(n)
    {
        cnt+=(n%2);
        n/=2;
    }
    return cnt;
}

int main()
{
    shihab
    test
    {
        int n;
        cin>>n;
        if(fnc(n)%2==0)cout<<"EVEN"<<endl;
        else cout<<"ODD"<<endl;
    }
    return 0;
}