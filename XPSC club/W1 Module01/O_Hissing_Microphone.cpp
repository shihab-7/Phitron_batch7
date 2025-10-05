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
    string s;
    cin>>s;
    bool flag=false;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]=='s' && s[i+1]=='s')
        {
            flag=true;
            break;
        }
    }
    if(flag) cout<<"hiss"<<endl;
    else cout<<"no hiss"<<endl;
    return 0;
}