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
        vector<ll>v(n);
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        int indx=-1;
        bool f=false;
        for(int i=0;i<n;i++)
        {
            if(v[i]==sum/n)
            {
                indx=i;
                f=true;
                break;
            }
        }
        if(sum%n!=0 || f==false)cout<<"Impossible"<<endl;
        else cout<<indx+1<<endl;
    }
    return 0;
}