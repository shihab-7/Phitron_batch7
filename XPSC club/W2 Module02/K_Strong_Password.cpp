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
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int i;
        for(i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1]) break;
        }
        if(s[i-1]=='a') s.insert(s.begin()+i,'b');
        else s.insert(s.begin()+i,'a');
        cout<<s<<endl;
    }
    return 0;
}