#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long
bool vowel(char c)
{
    return (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
}

int main()
{
    shihab
    test
    {
        string s, s2="CODETOWN";
        cin>>s;
        if(s==s2) cout<<"YES"<<endl;
        else
        {
            bool f=true;
            for(int i=0;i<8;i++)
            {
                if(vowel(s[i])!=vowel(s2[i]))
                {
                    f=false;
                    break;
                }
            }
            if(f) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}