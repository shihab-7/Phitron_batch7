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
        string s;
        cin>>s;
        int frq[26] = {0};
        for(char c:s)
        {
            frq[c-'A']++;
        }
        int ans=0;
        for(int i=0;i<26;i++)
        {
            if(frq[i]>0)
            {
                if(frq[i] == 1)
                {
                    ans += 2;
                }
                else
                {
                    ans+= (frq[i]+1);
                }
            }
        }
        cout << ans << endl;
   }
    return 0;
}