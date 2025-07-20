#include<bits/stdc++.h>
using namespace std;

class Mystack {
    public:
    list<int> l;
    void push(int x) 
    {
        l.push_back(x);
    }

    void pop() 
    {
        l.pop_back();
    }
    int top() 
    {
        return l.back();
    }
    bool empty() 
    {
        return l.empty();
    }
    int size() 
    {
        return l.size();
    }
};

int main()
{
    Mystack s;
    int val;
    while(cin>>val)
    {
        s.push(val);
    }
    if(!s.empty())
        cout << "Top element: " << s.top() << endl;
    if(!s.empty()) s.pop();
    if(!s.empty())
        cout << "Top element: " << s.top() << endl;
    if(!s.empty()) s.pop();
    if(!s.empty())
        cout << "Top element: " << s.top() << endl;
    if(!s.empty()) s.pop();
    cout << "Stack size: " << s.size() << endl;

    return 0;
}