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
        // int n,x;
        // cin>>n>>x;
        // vector<int>v(n);
        // for(int i=0;i<n;i++) cin>>v[i];
        // int g=0,l=0,e=0;
        // for(auto a:v)
        // {
        //     if(a>x) g++;
        //     else if(a<x) l++;
        //     else e++;
        // }
        // if(l==0||g==0) cout<<"Yes"<<endl;
        // else if(e>0) cout<<"Yes"<<endl;
        // else cout<<"No"<<endl;

        // another approach
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        bool f=true;
        for(int i=0;i<n-1;i++)
        {
            if((v[i]<x && v[i+1]>x) || (v[i]>x && v[i+1]<x))
            {
                f=false;
                break;
            }
        }
        if(f) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}