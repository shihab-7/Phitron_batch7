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
        vector<int>a(n+1),m(n+1);
        
        int xorA=0,xorM=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            xorA^=a[i];
        }
        for(int i=1;i<=n;i++)
        {
            cin>>m[i];
            xorM^=m[i];
        }

        for(int i=1;i<=n;i++)
        {
            int curxorA=xorA, curxorM=xorM;
            curxorA^=a[i];
            curxorM^=m[i];
            curxorA^=m[i];
            curxorM^=a[i];

            if((i%2==1)&&(curxorA>curxorM))
            {
                xorA=curxorA;
                xorM=curxorM;
            }
            if((i%2==0)&&(curxorM>curxorA))
            {
                xorA=curxorA;
                xorM=curxorM;
            }
        }
        if(xorA==xorM) cout<<"Tie"<<endl;
        else if(xorA>xorM)cout<<"Ajisai"<<endl;
        else cout<<"Mai"<<endl;
    }
    return 0;
}