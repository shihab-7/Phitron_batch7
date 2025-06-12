#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string wrd;
    stringstream ss(s);
    bool flag = false;
    while(ss>>wrd)
    {
        if(wrd=="Jessica")
        {
            flag=true;
            break;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}