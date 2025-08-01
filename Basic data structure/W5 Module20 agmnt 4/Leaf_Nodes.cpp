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
vector<int>v;
void leaf_nodes(Node *root)
{
    if(!root) return;
    if(!root->left && !root->right) v.push_back(root->val);
    leaf_nodes(root->left);
    leaf_nodes(root->right);
}

int main()
{
    Node *root=tree_input();
    leaf_nodes(root);
    sort(v.begin(),v.end(), greater<int>());
    for(int x:v) cout<<x<<" ";
    return 0;
}