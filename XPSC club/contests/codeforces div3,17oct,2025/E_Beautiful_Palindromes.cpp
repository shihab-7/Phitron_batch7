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
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        int x=-1;
        for(int i=1;i<=n;i++)
        {
            if(mp[i]==0)
            {
                x=i;
                break;
            }
        }
        if(x==-1)
        {
            vector<int>a={v[0],v[1],v[2]};
            for(int i=0;i<k;i++)
            {
                cout<<a[i%3]<<" ";
            }
            cout<<endl;
        }
        else
        {
            int z=v[n-1];
            int y=-1;
            for(int i=1;i<=n;i++)
            {
                if(i!=x && i!=z)
                {
                    y=i;
                    break;
                }
            }
            vector<int>a={x,y,z};
            for(int i=0;i<k;i++)
            {
                cout<<a[i%3]<<" ";
            }
            cout<<endl;
        }  
    }
    return 0;
}