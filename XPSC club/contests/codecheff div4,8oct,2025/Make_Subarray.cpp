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
        string s;
        cin>>s;
        bool f=false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                f=true;
                break;
            }
        }
        if(f)
        {
            int f1=-1,l1=-1,cnt=0;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='1')
                {
                    f1=i;
                    break;
                }
            }
            for(int i=n-1;i>=0;i--)
            {
                if(s[i]=='1')
                {
                    l1=i;
                    break;
                }
            }
            for(int i=f1;i<l1;i++)
            {
                if(s[i]=='0') cnt++;
            }
            cout<<cnt<<endl;
        }
        else cout<<0<<endl;
    }
    return 0;
}
