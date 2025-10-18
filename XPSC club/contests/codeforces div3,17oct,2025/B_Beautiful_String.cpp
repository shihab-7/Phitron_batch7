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
        vector<int>v;
        //just subsequence bolay 1 gula delete kore index gula print korlei hoito jehetu subsequence order follow kore na
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1') v.push_back(i+1);
        }
        cout<<v.size()<<endl;
        printv(v);
        cout<<endl;
    }
    return 0;
}