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
int size_of_list(Node *head)
{
    Node *tmp=head;
    int size=0;
    while(tmp!=NULL)
    {
        size++;
        tmp=tmp->next;
    }
    return size;
}
void print_mid(Node *head , int sz)
{
    Node *tmp=head;
    int mid = sz/2;
    if(sz%2==0)
    {
        for(int i=0;i<mid-1;i++)
        {
            tmp=tmp->next;
        }
        cout<<tmp->val<<" "<<tmp->next->val<<endl;
    }
    else
    {
        for(int i=0;i<mid;i++)
        {
            tmp=tmp->next;
        }
        cout<<tmp->val<<endl;
    }
}

int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    int val;
    while(cin>>val)
    {
        Node *newNode = new Node(val);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
        }
        else
        {
            tail->next=newNode;
            tail=newNode;
        }
    }
    int sz = size_of_list(head);
    print_mid(head,sz);
    return 0;
}