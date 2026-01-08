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
        int a,b;
        cin>>a>>b;
        if( a*225<b*100) cout<<"Small"<<endl;
        else if(a*225>b*100) cout<<"Large"<<endl;
        else cout<<"Equal"<<endl;
    }
    return 0;
}