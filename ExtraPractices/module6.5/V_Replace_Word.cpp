#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int p=0;
    while((p=s.find("EGYPT",p))!=-1)
    {
        s.replace(p,5," ");
        p++;
    }
    cout << s << endl;
    return 0;
}