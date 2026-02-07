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
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        map<int,int>cnt;
        for(int i=0;i<n;i++)
        {
            for(int j=2;j*j<=a[i];j++)
            {
                if(a[i]%j==0)
                {
                    while(a[i]%j==0)
                    {
                        cnt[j]++;
                        a[i]/=j;
                    }
                }
            }
            if(a[i]>1) cnt[a[i]]++;
        }
        bool f=true;
        for(auto [x,y]:cnt)
        {
            if(y%n!=0)
            {
                f=false;
                break;
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}