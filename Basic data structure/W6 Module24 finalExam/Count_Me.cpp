#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s, word;
        getline(cin,s);
        map<string,int> cnt;
        stringstream ss(s);
        int f_mx=0;
        string f_wrd;
        while(ss >> word)
        {
            cnt[word]++;
            if(cnt[word]>f_mx)
            {
                f_mx=cnt[word];
                f_wrd=word;
            }
        }
        cout<<f_wrd<<" "<<f_mx<<endl;
    }
    return 0;
}