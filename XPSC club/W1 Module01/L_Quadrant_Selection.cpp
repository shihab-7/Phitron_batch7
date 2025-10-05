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
    int x,y;
    cin>>x>>y;
    if(x>0 && y>0) cout<<1<<endl;
    else if(x<0 && y>0) cout<<2<<endl;
    else if(x<0 && y<0) cout<<3<<endl;
    else if(x>0 && y<0) cout<<4<<endl;
    return 0;
}