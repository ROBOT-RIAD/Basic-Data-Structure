#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int,int> pii;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

//root---->left---->right;
//algorithom
/*
 1.create a function = preorder(Node *root)
 2.base case if root == null return
 3.root->val; 
 4.preorder(root->left)
 5.preorder(root->right)
*/

void preorder(Node* root)
{
    if(root == NULL)return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}

//algorithom
/*
 1.create a function = postorder(Node *root)
 2.base case if root == null return
 4.postorder(root->left)
 5.postorder(root->right)
 3.root->val; 
*/

void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

//left---->root---->right;

//algorithom
/*
 1.create a function = inorder(Node *root)
 2.base case if root == null return
 4.inorder(root->left)
 3.root->val; 
 5.inorder(root->right)
*/
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
int main() {
    ROBOT_RIAD;
    Node* root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    root->left =a;
    root->right =b;
    a->left = c;
    a->right = h;
    c->right = e;
    b->right = d;
    d->left = f;
    d->right = g;
    h->right = i;
    preorder(root);
    
    return 0;
}
