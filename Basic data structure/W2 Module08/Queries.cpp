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
void delete_head(Node *&head)
{
    if(head==NULL) return;
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
    int q;
    cin>>q;
    while(q--)
    {
        int op, val;
        cin>>op>>val;
        if(op==0)
        {
            insert_at_head(head,tail,val);
            print_linked_list(head);
        }
        else if(op==1)
        {
            insert_at_tail(head,tail,val);
            print_linked_list(head);
        }
        else if(op==2)
        {
            int sz = size_of_linked_list(head);
            if(val==0)
            {
                delete_head(head);
                print_linked_list(head);
            }
            else if(val>0 && val< sz-1)
            {
                delete_at_any_position(head,val);
                print_linked_list(head);
            }
            else if(val==sz-1)
            {
                delete_tail(head,tail,val);
                print_linked_list(head);
            }
            else
            {
                print_linked_list(head);
            }
        }
    }
    return 0;
}