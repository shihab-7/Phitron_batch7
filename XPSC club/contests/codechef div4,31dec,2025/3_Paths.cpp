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
        if(n>2)
        {
            vector<vector<int>>v(n,vector<int>(n,0));
            v[0][0]=1;
            v[0][1]=1;
            v[0][2]=1;
            v[1][1]=1;
            v[1][2]=1;
            v[2][1]=1;
            v[2][2]=1;

            for(int i=2;i<n;i++)
            {
                v[i][2]=1;
                v[n-1][i]=1;
            }
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cout<<v[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        else cout<<-1<<endl;
    }
    return 0;
}