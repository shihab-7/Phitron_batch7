#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

const int N=1e5+10;
vector<vector<int>>prm_div(N);
void dvrs()
{
    for(int i=2;i<N;i++)
    {
        if(prm_div[i].empty())
        {
            for(int j=i;j<N;j+=i)
            {
                prm_div[j].push_back(i);
            }
        }
    }
}

int main()
{
    shihab
    // except 1 each number has at least one prime divisor
    dvrs();
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        for(auto d:prm_div[v[i]]) mp[d]++;
    }
    int mx=1;
    for(auto [x,y]:mp) mx=max(mx,y);
    cout<<mx<<endl;
    return 0;
}