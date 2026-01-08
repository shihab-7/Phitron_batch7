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
    int r,b;
    cin>>r>>b;
    int scr=min(r,b);
    int rd=r-scr, bl=b-scr,gr=scr;
    cout<<(gr*5)+rd+(bl*2)<<endl;
    return 0;
}