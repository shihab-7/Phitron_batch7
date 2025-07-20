#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) 
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Mystack {
    public:
    Node *head=NULL;
    Node *tail=NULL;
    int sz=0;
    
    void push(int x) 
    {
        sz++;
        Node *newNode = new Node(x);
        if(head == NULL)
        {
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }

    void pop() 
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if(tail==NULL)
        {
            head=NULL;
            return;
        }
        tail->next = NULL;

    }
    int top() 
    {
        return tail->val;
    }
    bool empty() 
    {
        return head==NULL;
    }
    int size() 
    {
        return sz;
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