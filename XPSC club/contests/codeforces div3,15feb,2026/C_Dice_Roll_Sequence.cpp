#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

vector<int>grp(7);

int main()
{
    shihab
    grp[1]=1;
    grp[6]=1;
    grp[2]=2;
    grp[5]=2;
    grp[3]=3;
    grp[4]=3;
    test
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        vector<int>block(n);
        for(int i=0;i<n;i++) block[i]=grp[v[i]];

        int cnt=0;
        for(int i=0;i<n;)
        {
            int j=i,sz=0;
            while(j<n && block[j]==block[i])
            {
                j++;
                sz++;
            }
            cnt+=sz/2;
            i=j;
        }
        cout<<cnt<<endl;
    }
    return 0;
}