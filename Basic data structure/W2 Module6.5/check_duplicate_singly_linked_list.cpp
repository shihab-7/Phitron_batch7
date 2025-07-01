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

bool check_duplicate(Node *head)
{
    Node *i = head;
    while(i != NULL)
    {
        Node *j = i->next;
        while(j != NULL)
        {
            if(i->val == j->val)
            {
                return true;
            }
            j = j->next;
        }
        i=i->next;
    }
    return false;
}

int main()
{
    int val;
    Node *head = NULL;
    Node *tail = NULL;

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
            tail->next =newNode;
            tail=newNode;
        }
    }
    if(check_duplicate(head)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}