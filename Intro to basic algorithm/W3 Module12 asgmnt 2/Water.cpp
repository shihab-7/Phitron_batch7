#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        b=a;
        sort(b.begin(),b.end());
        int f_mx=b[n-1],s_mx=b[n-2];
        int f_indx=-1,s_indx=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]==f_mx) f_indx=i;
            if(a[i]==s_mx) s_indx=i;
        }
        if(f_indx>s_indx) swap(f_indx,s_indx);
        cout<<f_indx<<" "<<s_indx<<endl;
    }
    return 0;
}