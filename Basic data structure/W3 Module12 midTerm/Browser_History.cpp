#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<string>l;
    string val;
    while(true)
    {
        cin>>val;
        if(val=="end") break;
        l.push_back(val);
    }
    auto curr_pos = l.begin();
    int q;
    cin>>q;
    while(q--)
    {
        string op;
        cin>>op;
        if(op=="visit")
        {
            string site;
            cin>>site;
            auto found = find(l.begin(),l.end(),site);
            if(found != l.end())
            {
                curr_pos = found;
                cout<<*curr_pos<<endl;
            }
            else cout<<"Not Available"<<endl;
        }
        else if(op=="next")
        {
            if(next(curr_pos)!=l.end())
            {
                curr_pos++;
                cout<<*curr_pos<<endl;
            }
            else cout<<"Not Available"<<endl;
        }
        else if(op=="prev")
        {
            if(curr_pos!=l.begin())
            {
                curr_pos--;
                cout<<*curr_pos<<endl;
            }
            else cout<<"Not Available"<<endl;
        }
    }
    return 0;
}