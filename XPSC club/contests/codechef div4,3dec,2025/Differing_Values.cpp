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
        string s;
        cin>>s;
        int cnt0=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0') cnt0++;
        }
        int min0=0,max0=0;
        for(int i=0;i<k;i++)
        {
            int grp_sz=(n-i+k-1)/k;
            min0 +=grp_sz/2;
            max0 +=(grp_sz+1)/2;
        }
        if(cnt0>=min0 && cnt0<=max0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}