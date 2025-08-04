#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    while(q--)
    {
        string fnc;
        cin>>fnc;
        if(fnc=="pop_back")
        {
            if(!s.empty())
            {
                s.pop_back();
            }
        } 
        else if(fnc=="front") 
        {
            if(!s.empty())
            {
                cout<<s.front()<<endl;
            }
        }
        else if(fnc=="back") 
        {
            if(!s.empty())
            {
                cout<<s.back()<<endl;
            }
        }
        else if(fnc=="sort")
        {
            int l,r;
            cin>>l>>r;
            if(l>r) swap(l, r);
            sort(s.begin()+l-1, s.begin()+r);
        }
        else if(fnc=="reverse")
        {
            int l,r;
            cin>>l>>r;
            if(l>r) swap(l, r);
            reverse(s.begin()+l-1, s.begin()+r);
        }
        else if(fnc=="print")
        {
            int pos;
            cin>>pos;
            cout<<s[pos-1]<<endl;
        }
        else if(fnc=="substr")
        {
            int l,r;
            cin>>l>>r;
            if(l>r) swap(l, r);
            string sub = s.substr(l-1, r-l+1);
            cout<<sub<<endl; 
        }
        else if(fnc=="push_back")
        {
            char x;
            cin >> x;
            s.push_back(x);
        }
    }
    return 0;
}