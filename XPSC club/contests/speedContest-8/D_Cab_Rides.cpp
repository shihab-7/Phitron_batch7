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
        int n;
        cin>>n;
        if(n<=4) cout<<max(200,100*n)<<endl;
        else
        {
            int op_cst=0;
            if(n%4==1) op_cst=((n/4)-1)*400+500;
            else if(n%4==2) op_cst=(n/4)*400+200;
            else op_cst=(n/4)*400+300;
            cout<<op_cst<<endl;
        }
    }
    return 0;
}