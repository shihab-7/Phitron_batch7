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

bool is_sorted(Node *head)
{
    if(head==NULL || head->next==NULL) return true;
    Node *tmp =head;
    while(tmp->next != NULL)
    {
        if(tmp->val > tmp->next->val)
        {
            return false;
        }
        tmp=tmp->next;
    }
    return true;
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
    if(is_sorted(head)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}