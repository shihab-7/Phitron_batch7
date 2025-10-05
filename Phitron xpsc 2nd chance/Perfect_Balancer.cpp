#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<ll>v(n);
    ll sum1=0,sum2=0;

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum1+=v[i];
    }
    int indx=-1;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        if(sum1-sum2-v[i]==sum2)
        {
            indx=i;
            flag=true;
            break;
        }
        sum2+=v[i];
    }
    if(flag) cout<<sum2+v[indx]<<" "<<indx+1<<'\n';
    else cout<<"UNSTABLE\n";
    return 0;
}