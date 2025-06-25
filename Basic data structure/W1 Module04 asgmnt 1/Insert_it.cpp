#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    vector<int>b(m);
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    vector<int>c(n+m);
    int pos;
    cin>>pos;

    for(int i=0;i<pos;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<m;i++)
    {
        c[pos+i]=b[i];
    }
    for(int i=pos;i<n;i++)
    {
        c[m+i]=a[i];
    }
    for(int i=0;i<n+m;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}