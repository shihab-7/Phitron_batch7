#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if((s[i]=='0' && s[j]=='1'&&s[j+1]=='0')||(s[i]=='1'&&s[j]=='0'&&s[j+1]=='1'))
            {
                cnt++;
            }
            else break;
        }
    }
    cout<<cnt<<'\n';
    return 0;
}