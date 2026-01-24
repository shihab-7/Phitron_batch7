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
        ll n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        vector<int>pre(n,-1),suf(n,-1);
        pre[0]=min(a[0],b[0]);
        for(int i=1;i<n;i++)
        {
            int mn=min(a[i],b[i]);
            int mx=max(a[i],b[i]);
            if(pre[i-1]<=mn) pre[i]=mn;
            else if(pre[i-1]<=mx) pre[i]=mx;
            else break;
        }
        
        suf[n-1]=max(a[n-1],b[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            int mn=min(a[i],b[i]);
            int mx=max(a[i],b[i]);
            if(suf[i+1]>=mx) suf[i]=mx;
            else if(suf[i+1]>=mn) suf[i]=mn;
            else break;
        }
        // printv(pre);
        // cout<<endl;
        // printv(suf);
        // cout<<endl;

        bool ok=false;
        for(int i=0;i<n;i++)
        {
            int mn=min(a[i],b[i]);
            int mx=max(a[i],b[i]);

            int smne=0,pche=1e9;
            bool f=true;
            if(i-1>=0)
            {
                if(pre[i-1]!=-1) smne=pre[i-1];
                else f=false;
            }
            if(i+1<n)
            {
                if(suf[i+1]!=-1) pche=suf[i+1];
                else f=false;
            }

            if(f==true && smne<=mn && mx<=pche) 
            {
                ok=true;
                break;
            }
        }

        if(ok) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;  
    }
    return 0;
}