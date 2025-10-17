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
        string s,res="";
        cin>>s;
        int B=0,b=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                if(s[i]=='B') B++;
                else
                {
                    if(B>0) B--;
                    else res+=s[i];
                }
            }
            else
            {
                if(s[i]=='b') b++;
                else
                {
                    if(b>0) b--;
                    else res+=s[i];
                }
            }
        }
        reverse(res.begin(),res.end());
        cout<<res<<endl;
    }
    return 0;
}