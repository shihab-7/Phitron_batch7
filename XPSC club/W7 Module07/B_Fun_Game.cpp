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
        string s1,s2;
        cin>>s1>>s2;
        if(s1==s2||s1[0]=='1')
        {
            cout<<"YES"<<endl;
            continue;
        }
        int pos=-1;
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='1')
            {
                pos=i;
                break;
            }
        }
        if(pos!=-1)
        {
            bool f=true;
            for(int i=0;i<n;i++)
            {
                if(s1[i]!=s2[i])
                {
                    if(pos>i)
                    {
                        f=false;
                        break;
                    }
                }
            }
            if(f) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}