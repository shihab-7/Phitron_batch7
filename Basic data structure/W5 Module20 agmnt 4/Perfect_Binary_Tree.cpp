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

bool perfect_binary_tree(Node *root)
{
    if(!root) return true;
    int depth=height(root);
    if(pow(2,depth)-1 != total_nodes(root))
    return false;
    else return true;
    
}
int main()
{
    Node *root=tree_input();
    if(perfect_binary_tree(root))
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}