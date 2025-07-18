#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;

    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head =newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}

void insert_any_pos(Node *head , int index, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for(int i=0;i<index-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next->prev=newNode;
    tmp->next=newNode;
    newNode->prev=tmp;
}

int size(Node *head)
{
    int cnt=0;
    Node *tmp =head;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}

void print_forward(Node *head)
{
    Node *tmp = head;
    cout<<"L -> ";
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_backward(Node *tail)
{
    Node *tmp = tail;
    cout<<"R -> ";
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin>>q;
    while(q--)
    {
        int x,v;
        cin>>x>>v;
        int sz = size(head);
        if(x==0)
        {
            insert_at_head(head,tail,v);
            print_forward(head);
            print_backward(tail);
        }
        else if(x==sz)
        {
            insert_at_tail(head,tail,v);
            print_forward(head);
            print_backward(tail);
        }
        else if(x>0 && x<sz)
        {
            insert_any_pos(head,x,v);
            print_forward(head);
            print_backward(tail);
        }
        else cout<<"Invalid"<<endl;
    }
    return 0;
}