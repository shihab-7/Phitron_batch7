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
        string s;
        cin>>s;
        string patt="CVCVCVCC",ans="";
        for(int i=0; i<8; i++)
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')ans+='V';
            else ans+='C';
        }
        if(ans==patt) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}