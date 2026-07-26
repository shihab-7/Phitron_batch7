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
        vector<int>p(n),a(n);
        for(int i=0;i<n;i++) cin>>p[i];
        for(int i=0;i<n;i++) cin>>a[i];

        map<int,int>mp;
        for(int i=0;i<n;i++) mp[p[i]]=i;

        bool f=true;
        int i=0,j=0,lpos=-1;
        while(i<n)
        {
            int dgt=a[i];
            j=i;
            while(j<n&& a[j]==dgt) j++;
            
            int curpos=mp[dgt];
            if(curpos<lpos)
            {
                f=false;
                break;
            }
            lpos=curpos;
            i=j;
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}