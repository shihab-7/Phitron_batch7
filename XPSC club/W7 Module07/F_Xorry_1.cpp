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
    test
    {
        int x;
        cin>>x;
        int cnt=0,num=x;
        while(num>1)
        {
            num/=2;
            cnt++;
        }
        int b=pow(2,cnt), a=x-b;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}