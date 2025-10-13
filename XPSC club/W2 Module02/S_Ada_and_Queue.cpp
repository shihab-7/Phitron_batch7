#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

int main()
{
    shihab
    int q;
    cin>>q;
    deque<int>dq;
    bool rev=false;
    while(q--)
    {
        string s;
        cin>>s;
        if(s=="toFront")
        {
            int x;
            cin>>x;
            if(rev) dq.push_back(x);
            else dq.push_front(x);
        }
        else if(s=="push_back")
        {
            int y;
            cin>>y;
            if(rev) dq.push_front(y);
            else dq.push_back(y);
        }
        else if(s=="front")
        {
            if(dq.empty()) cout<<"No job for Ada?"<<endl;
            else 
            {
                if(rev)
                {
                    cout<<dq.back()<<endl;
                    dq.pop_back();
                }
                else
                {
                    cout<<dq.front()<<endl;
                    dq.pop_front();
                }
            }
        }
        else if(s=="back")
        {
            if(dq.empty()) cout<<"No job for Ada?"<<endl;
            else
            {
                if(rev)
                {
                    cout<<dq.front()<<endl;
                    dq.pop_front();
                }
                else
                {
                    cout<<dq.back()<<endl;
                    dq.pop_back();
                }
            }
        }
        else if(s=="reverse") rev=!rev;
    }
    return 0;
}