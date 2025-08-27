#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sz;
        cin>>sz;
        vector<int>v(sz);
        for(int i=0;i<sz;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int mx_cnt=0,mn_cnt=0;
        int mn=v[0],mx=v[sz-1];
        if((mn%2 == mx%2)) cout<<0<<endl;
        else
        {
            int i=0;
            while(v[i]%2 != mx%2)
            {
                i++;
                mn_cnt++;
            }
            int j=sz-1;
            while(v[j]%2 != mn%2)
            {
                j--;
                mx_cnt++;
            }
            cout<<min(mx_cnt,mn_cnt)<<endl;
        }
    }
    return 0;
}