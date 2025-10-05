#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin>>q;
    map<int,int>mp;
    while(q--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            int x;
            cin>>x;
            mp[x]++;
        }
        else if(n==2)
        {
            if(mp.empty()) cout<<"empty\n";
            else
            {
                int mx=0,val=0;
                for(auto c:mp) mx=max(mx,c.second);
                for(auto oc:mp)
                {
                    if(oc.second==mx)
                    {
                        val=oc.first;
                    }
                    mp[val]--;
                }
                cout<<val<<'\n';
                mp.erase(val);
            }
        }
    }
    // for(auto v:mp) cout<<v.first<<" "<<v.second<<'\n';
    return 0;
}