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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int l=0,cnt=0;
        while(l<n)
        {
            if(s[l]=='B')
            {
                cnt++;
                l+=k;
            }
            else l++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}