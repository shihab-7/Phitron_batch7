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
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];

        vector<int>prefMin(n),suffMax(n);
        prefMin[0]=v[0];
        suffMax[n-1]=v[n-1];
        for(int i=1;i<n;i++)
        {
            prefMin[i]=min(prefMin[i-1],v[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            suffMax[i]=max(suffMax[i+1],v[i]);
        }
        bool f=true;
        for(int i=0;i<n-1;i++)
        {
            if(prefMin[i]>suffMax[i+1])
            {
                f=false;
                break;
            }
        }
        if(f) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}