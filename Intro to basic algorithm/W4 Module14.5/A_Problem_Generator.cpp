#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int frq[7]={0};
        for(char c:s)
        {
            frq[c-'A']++;
        }
        int cnt=0;
        for(int i=0;i<7;i++)
        {
            if(frq[i]<m)
            {
                cnt+= m-frq[i];
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}