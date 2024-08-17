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
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void insert_head(Node *&head, int val)
{
    Node* newnode = new Node(val);
    newnode->next =head;
    head=newnode;
}

int size(Node* head)
{
    Node* tmp =head;
    int count=0;
    while(tmp !=NULL)
    {
        count++;
        tmp =tmp->next;
    }
    return count;
}

void insert_at_position(Node *&head, int pos, int val)
{
    Node* newnode =new Node(val);
    Node* tmp =head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
        if (tmp == NULL)
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }
    newnode->next=tmp->next;
    tmp->next = newnode;
}

void print_recursion(Node* head)
{
    if(head == NULL)return;
    cout<<head->val<<" ";
    print_recursion(head->next);
}
void print_recursion(Node* head)
{
    if(head == NULL)return;
    print_recursion(head->next);
    cout<<head->val<<" ";
}

int main() {
    ROBOT_RIAD;
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    int pos, val;
    cin >> pos >> val;
    if (pos > size(head))
    {
        cout << "Invalid Index" << endl;
    }
    else if (pos == 0)
    {
        insert_head(head, val);
    }
    else if (pos == size(head))
    {
        insert_tail(head, tail, val);
    }
    else
    {
        insert_at_position(head, pos, val);
    }
    for( Node* i=head ; i->next !=NULL;i =i->next)
    {
         for(Node* j=i->next ; j!=NULL ;j=j->next)
         {
            if(i->val < j->val)
            {
                swap(i->val,j->val);
            }
         }
    }
    print_recursion( head);
    return 0;
}
