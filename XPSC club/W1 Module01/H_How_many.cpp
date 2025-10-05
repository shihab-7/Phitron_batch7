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
    int s,t;
    cin>>s>>t;
    int cnt=0;
    for(int i=0;i<101;i++)
    {
        for(int j=0;j<101;j++)
        {
            for(int k=0;k<101;k++)
            {
                if(i+j+k<=s && i*j*k<=t) cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}