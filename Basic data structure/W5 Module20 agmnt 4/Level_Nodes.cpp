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
void find_level_nodes(Node *root, int level)
{
    if(!root)
    {
        cout<<"Invalid"<<endl;
        return;
    }
    queue<pair<Node*,int>> q;
    q.push({root,0});
    bool found=false;
    while(!q.empty())
    {
        pair<Node*,int> p=q.front();
        q.pop();
        if(p.second==level) 
        {
            cout<<p.first->val<<" ";
            found=true;
        }
        if(p.first->left) q.push({p.first->left,p.second+1});
        if(p.first->right) q.push({p.first->right,p.second+1});
    }
    if(!found) cout<<"Invalid"<<endl;
}
int main()
{
    Node *root=tree_input();
    int x;
    cin>>x;
    find_level_nodes(root,x);
    return 0;
}