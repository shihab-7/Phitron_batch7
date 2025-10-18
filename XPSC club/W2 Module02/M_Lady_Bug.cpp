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
        string a,b;
        cin>>a>>b;
        int a_odd1=0,a_even1=0,b_odd0=0,b_even0=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(a[i]=='1') a_even1++;
                if(b[i]=='0') b_even0++;
            }
            else
            {
                if(a[i]=='1') a_odd1++;
                if(b[i]=='0') b_odd0++;
            }
        }
        if(b_even0>=a_odd1 && b_odd0>=a_even1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}