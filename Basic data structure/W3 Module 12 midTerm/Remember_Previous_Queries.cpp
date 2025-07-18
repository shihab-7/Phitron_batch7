#include<bits/stdc++.h>
using namespace std;

void print(list<int>tmp)
{
    cout<<"L -> ";
    for(auto x:tmp) 
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"R -> ";
    for(auto it=tmp.rbegin(); it!=tmp.rend(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    list<int>l;
    int q;
    cin>>q;
    while(q--)
    {
        int x,v;
        cin>>x>>v;
        if(x==0)
        {
            l.push_front(v);
            print(l);
        }
        else if(x==1)
        {
            l.push_back(v);
            print(l);
        }
        else if(x==2)
        {
            if(v>=0 && v<l.size())
            {
                l.erase(next(l.begin(),v));
            }
            print(l);
        }
    }
    return 0;
}