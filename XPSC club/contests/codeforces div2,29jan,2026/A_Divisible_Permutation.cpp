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
        int mid=(n+1)/2;
        cout<<mid<<" ";
        int jmp=1;
        while(jmp<=n)
        {
            if(mid+jmp<=n) cout<<mid+jmp<<" ";
            if(mid-jmp>=1) cout<<mid-jmp<<" ";
            jmp++;
        }
        cout<<endl;
    }
    return 0;
}