#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
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
        Node *newNode=new Node(x);
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
        Node *deleteNode=tail;
        tail=tail->prev;
        delete deleteNode;
        if(tail==NULL)
        {
            head=NULL;
            return;
        }
        tail->next=NULL;
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
class Myqueue {
    public:
    Node *head=NULL;
    Node *tail=NULL;
    int sz=0;
    void push(int x) 
    {
        sz++;
        Node *newNode=new Node(x);
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
        Node *deleteNode=head;
        head = head->next;
        delete deleteNode;
        if(head==NULL)
        {
            tail=NULL;
            return;
        }
        head->prev=NULL;
    }
    int front() 
    {
        return head->val;
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
    int n,m;
    cin>>n>>m;
    Mystack st;
    Myqueue q;
    for(int i=0;i<n;i++)
    {
        int v;
        cin>>v;
        st.push(v);
    }
    for(int i=0;i<m;i++)
    {
        int v;
        cin>>v;
        q.push(v);
    }
    bool flag=true;
    if(n==m)
    {
        while(!q.empty() && !st.empty())
        {
            if(q.front()!= st.top())
            {
                flag=false;
                break;
            }
            q.pop();
            st.pop();
        }
    }
    else flag=false;

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}