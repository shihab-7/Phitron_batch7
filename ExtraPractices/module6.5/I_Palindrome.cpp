#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<< (equal(s.begin(), s.end(), s.rbegin()) ? "YES" : "NO") << endl;
    return 0;
}