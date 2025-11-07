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
        cin.ignore();
        int k,n,m;
        cin>>k>>n>>m;
        vector<int>v1(n),v2(m);
        for(int i=0;i<n;i++)cin>>v1[i];
        for(int i=0;i<m;i++)cin>>v2[i];
        int i=0,j=0;
        vector<int>ans;
        bool flag=false;
        while(i<n || j<m)
        {
            if(i<n&& v1[i]<=k)
            {
                ans.push_back(v1[i]);
                if(v1[i]==0)k++;
                i++;
            }
            else
            {
                if(j<m &&v2[j]<=k)
                {
                    ans.push_back(v2[j]);
                    if(v2[j]==0)k++;
                    j++;
                }
                else
                {
                    cout<<-1<<endl;
                    flag=true;
                    break;
                }
            }
        }
        if(!flag)
        {
            for(auto a:ans)cout<<a<<" ";
            cout<<endl;
        } 
    }
    return 0;
}