#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void insert_at_any_position(Node *&head, int index, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for(int i=1;i<index;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}
void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head=head->next;
    delete deleteNode;
}
void delete_at_any_position(Node *&head , int index)
{
    Node *tmp=head;
    for(int i=1;i<index;i++)
    {
        tmp=tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
}
void delete_tail(Node *&head, Node *&tail, int index)
{
    Node *tmp=head;
    for(int i=1;i<index;i++)
    {
        tmp=tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
    tail=tmp;
}
void print_linked_list(Node *head)
{
    Node *tmp=head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int size_of_linked_list(Node *head)
{
    Node *tmp=head;
    int sz=0;
    while(tmp!=NULL)
    {
        sz++;
        tmp=tmp->next;
    }
    return sz;
}


int main()
{
    Node *head=NULL;
    Node *tail=NULL;


    return 0;
}