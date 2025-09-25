#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int trgt;
    cin>>trgt;
    int indx=-1;
    bool found=false;
    for(int i=0;i<n;i++)
    {
        if(v[i]==trgt)
        {
            indx=i;
            found=true;
            break;
        }
    }
    if(found) cout<<indx<<"\n";
    else cout<<"-1\n";
    return 0;
}