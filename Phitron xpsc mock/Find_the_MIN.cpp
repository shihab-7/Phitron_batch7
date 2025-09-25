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
        int op;
        cin>>op;
        if(op==1)
        {
            int x;
            cin>>x;
            mp[x]++;
        }
        else if(op==2)
        {
            if(mp.empty()) cout<<"empty\n";
            else
            {
                cout<<mp.begin()->first<<"\n";
                mp.erase(mp.begin());
            }
        }
    }
    return 0;
}

