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
int sum=0;
void without_leaf_nodes_sum(Node *root)
{
    if(!root) return;
    if(!root->left && !root->right) 
    return;
    sum+=root->val;
    without_leaf_nodes_sum(root->left);
    without_leaf_nodes_sum(root->right);
}

int main()
{
    Node *root=tree_input();
    without_leaf_nodes_sum(root);
    cout<<sum<<endl;
    return 0;
}