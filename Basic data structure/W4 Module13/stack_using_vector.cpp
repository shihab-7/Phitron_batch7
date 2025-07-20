#include<bits/stdc++.h>
using namespace std;

class Mystack {
    public:
    vector<int> v;
    void push(int x) 
    {
        v.push_back(x);
    }

    void pop() 
    {
        v.pop_back();
    }
    int top() 
    {
        return v.back();
    }
    bool empty() 
    {
        return v.empty();
    }
    int size() 
    {
        return v.size();
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