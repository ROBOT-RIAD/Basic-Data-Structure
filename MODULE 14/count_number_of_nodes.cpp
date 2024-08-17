#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int,int> pii;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val =val;
        this->left =NULL;
        this->right =NULL;
    }
};

Node* input_tree()
{
    int val;cin>>val;
    Node* root;
    if(val == -1)root =NULL;
    else root =new Node(val);

    queue<Node*>q;

    if(root) q.push(root);

    while(!q.empty())
    {
        // 1. ber kore ano
        Node* p = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        int l,r;cin>>l>>r;
        Node* myleft;
        Node* myright;

        if(l==-1) myleft=NULL;
        else myleft =new Node(l);
        if(r==-1) myright=NULL;
        else myright =new Node(r);

        p->left =myleft;
        p->right=myright;

        // 3. children gulo ke push koro
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
}

int count(Node* root)
{
    if(root == NULL) return 0;
    int l= count(root->left);
    int r =count(root->right);
    return l+r+1;
}

int main() {
    ROBOT_RIAD;
    Node *root = input_tree();
    cout << count(root) << endl;  
    return 0;
}
