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
void level_order(Node *root)
{
    if(!root) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node *p=q.front();
        q.pop();

        cout<<p->val<<" ";
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
}
void in_order(Node *root)
{
    if(!root) return;
    in_order(root->left);
    cout<<root->val<<" ";
    in_order(root->right);
}
void pre_order(Node *root)
{
    if(!root) return;
    cout<<root->val<<" ";
    pre_order(root->left);
    pre_order(root->right);
}
void post_order(Node *root)
{
    if(!root) return;
    post_order(root->left);
    post_order(root->right);
    cout<<root->val<<" ";
}
int height(Node *root)
{
    if(!root) return 0;
    int l = height(root->left);
    int r = height(root->right);
    return max(l,r)+1;
}
int total_nodes(Node *root)
{
    if(!root) return 0;
    int l=total_nodes(root->left);
    int r=total_nodes(root->right);
    return l+r+1;
}
void leaf_nodes(Node *root)
{
    if(!root) return;
    if(!root->left && !root->right) cout<<root->val<<" ";
    leaf_nodes(root->left);
    leaf_nodes(root->right);
}
bool special_binary_tree(Node *root)
{
    if(!root) return true;
    if((root->left!=NULL && root->right==NULL)||(root->left==NULL && root->right!=NULL))
    return false;
    bool l=special_binary_tree(root->left);
    bool r=special_binary_tree(root->right);
    return l && r;
}
int main()
{


    return 0;
}