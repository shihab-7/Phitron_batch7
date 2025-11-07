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
    int n;
    cin>>n;
    map<int,int>lst_indx;
    int ans=0;
    for(int j=1,i=1; j<=n; j++)
    {
        int x;
        cin>>x;
        i=max(i,lst_indx[x]+1);

        lst_indx[x]=j;
        ans=max(ans,j-i+1);
    }
    cout<<ans<<endl;
    return 0;
}