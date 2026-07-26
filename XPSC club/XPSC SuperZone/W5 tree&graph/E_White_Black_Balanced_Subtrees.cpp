#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long
int n,root,cnt;
string s;
vector<int>v[200005];

int dfs(int r)
{
    int chk;
    if(s[r-1]=='B') chk=-1;
    else chk=1;
    for(auto a:v[r])
    {
        chk+=dfs(a);
    }
    if(chk==0) cnt++;
    return chk;
}

int main()
{
    shihab
    test
    {
        cin>>n;
        for(int i=1;i<=n;i++) v[i].clear();
        for(int i=2;i<=n;i++)
        {
            int val;
            cin>>val;
            v[val].push_back(i);
        }
        cin>>s;
        cnt=0;
        dfs(1);
        cout<<cnt<<endl;
    }
    return 0;
}