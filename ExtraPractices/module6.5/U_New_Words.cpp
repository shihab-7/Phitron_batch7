#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int frq[26] = {0};
    for(char c:s)
    {
        if(c=='E' || c=='G' || c=='Y' || c=='P' || c=='T'|| c=='e' || c=='g' || c=='y' || c=='p' || c=='t')
        {
            frq[toupper(c)-'A']++;
        }
    }
    int mn=INT_MAX;
    for(int i=0;i<26;i++)
    {
        if(frq[i]>0)
        {
            mn=min(mn,frq[i]);
        }
    }
    cout << mn << endl;
    return 0;
}