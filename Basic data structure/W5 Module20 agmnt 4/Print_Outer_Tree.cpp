#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* tree_input()
{
    int val;
    cin>>val;
    Node *root; 
    if(val==-1) root=NULL;
    else root=new Node(val);

    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node *p=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node *lf, *ri;

        if(l==-1) lf=NULL;
        else lf=new Node(l);
        if(r==-1) ri=NULL;
        else ri=new Node(r);

        p->left=lf;
        p->right=ri;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
void from_left(Node *root)
{
    if(!root) return;
    if(root->left) from_left(root->left);
    else if(root->right) from_left(root->right);
    cout<<root->val<<" ";
}
void from_right(Node *root)
{
    if(!root) return;
    cout<<root->val<<" ";
    if(root->right) from_right(root->right);
    else if(root->left) from_right(root->left);
}

void print_outer(Node *root)
{
    if(!root) return;
    if(root->left)
    {
        from_left(root->left);
        cout<<root->val<<" ";
        if(root->right) from_right(root->right);
    }
    else if(root->right) from_right(root);
    else cout<<root->val;
}
int main()
{
    Node *root=tree_input();
    print_outer(root);
    return 0;
}