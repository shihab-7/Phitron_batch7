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
    dvrs();
    int n;
    cin>>n;
    
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(prm_div[i].size()==2) cnt++;
        // cout<<prm_div[i].size()<<" ";
    }
    cout<<cnt<<endl;
    return 0;
}