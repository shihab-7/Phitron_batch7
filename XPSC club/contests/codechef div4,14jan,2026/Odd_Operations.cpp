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
        if (n%2==1) cout<<0<<endl;
        else if(n<10 &&n%2==0) cout<<-1<<endl;
        else 
        {
            int tmp=n;
            bool f=false;
            while(tmp)
            {
                int d=tmp%10;
                if(d%2==1)
                {
                    f=true;
                    break;
                }
                tmp/=10;
            }
            if(f) cout<<1<<endl;
            else
            {
                tmp=n;
                int mx_d=INT_MIN;
                while(tmp)
                {
                    mx_d=max(mx_d,tmp%10);
                    tmp/=10;
                }
                int tmp2=n-mx_d;
                bool f2=false;
                while(tmp2)
                {
                    int d=tmp2%10;
                    if(d%2==1)
                    {
                        f2=true;
                        break;
                    }
                    tmp2/=10;
                }
                if(f2) cout<<2<<endl;
                else cout<<3<<endl;
            }
        }
    }
    return 0;
}