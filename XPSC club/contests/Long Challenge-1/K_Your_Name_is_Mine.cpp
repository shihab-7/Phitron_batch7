#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

bool subseq(string m, string w)
{
    if(m.size()>w.size()) return false;
    else
    {
        int i=0,j=0;
        while(i<m.size()&& j<w.size())
        {
            if(m[i]==w[j]) i++;
            j++;
        }
        if(i==m.size()) return true;
        else return false;
    }
}

int main()
{
    shihab
    test
    {
        string m,w;
        cin>>m>>w;
        if(subseq(m,w)||subseq(w,m)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}