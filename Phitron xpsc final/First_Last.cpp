#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    
    int n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    set<ll>s;
    for(ll x:v) s.insert(x);
    for(ll val:s)
    {
        int findx=-1,lstindx=-1;
        for(int i=0;i<n;i++)
        {
            if(v[i]==val)
            {
                if(findx==-1) findx=i;
                lstindx=i;
            }
        }
        cout<<val<<" "<<findx+1<<" "<<lstindx+1<<"\n";
    }
    return 0;
}