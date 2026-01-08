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
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    while(k--)
    {
        int val;
        cin>>val;
        int l=0, r=n-1;
        bool found=false;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(v[mid]==val)
            {
                found=true;
                break;
            }
            else if(v[mid]<val) l=mid+1;
            else r=mid-1;
        }
        if(found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}