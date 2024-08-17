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
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val =val;
        this->next =NULL;
        this->prev=NULL;
    }
};

//algorithom
/*
 1.create a function = print_dubly(Node* head)
 2.create a tmp node tmp=head
 3.while tmp != null cout tmp->val tmp=tmp->next
*/
void print_dounley(Node* head)
{
    Node* tmp=head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout << endl;  
}
//algorithom
/*
 1.create a function = print_reverse(Node *tail)
 2.create a tmp node tmp=tail
 3.while tmp != null cout tmp->val tmp=tmp->prev
*/
void print_reverse(Node* tail)
{
    Node* tmp= tail;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout << endl;  
}

//algorithom
/*
 1.create a function = insert_tail(Node *&head, Node *&tail, int val)
 2.create a newnode
 3.if tail == NULL head=newnode tail=newnode rerturn
 4.tail->next = newnode
 5.newnode->prev = tail
 6.tail = tail->next
*/

void insert_tail(Node*& head,Node*& tail,int val)
{
    Node* newnode =new Node(val);
    if(tail == NULL)
    {
        head =newnode;
        tail =newnode;
        return;
    }
    tail->next =newnode;
    newnode->prev =tail;
    tail =tail->next;
}

//algorithom
/*
 1.create a function = insert_at_position(Node *head, int pos, int val)
 2.create a newnode
 3.create a tmp node tmp=head
 4.for i=1 i<pos-1 i++ tmp=tmp->next
 5.newnode->next = tmp->next
 6.tmp->next = newnode
 7.newnode->next-prev = newnode
 8.newnode->prev =tmp
*/

void insert_at_position(Node *head, int pos, int val)
{
    Node* newnode = new Node(val);
    Node* tmp = head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next=newnode;
    newnode->next->prev = newnode;
    newnode->prev=tmp;    
}

int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

//algorithom
/*
 1. create a fuction = insert_head(Node *&head, Node *&tail, int val)
 2.create a newnode
 3.if head == Null head=newnode tail=newnode return
 4.newnode->next =head
 5.head =newnode
*/ 
void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

//algorithom
/*
 1.create a function = delete_at_position(Node *head, int pos)
 2.create a tmp =head
 3.for i=1 i<=pos-1 i++ tmp=tmp->next
 4.deletenode = tmp->next
 5.tmp->next= tmp->next->next
 6.tmp->next->prev =tmp
 7.delete deletenode
*/

void delete_at_position(Node *head, int pos)
{
    Node* tmp = head;
    for(int i=1;i<pos-1;i++)
    {
        tmp=tmp->next;
    }
    Node* deletenode = tmp->next;
    tmp->next =tmp->next->next;
    tmp->next->prev =tmp;
    delete deletenode;
}

//algorithom
/*
 1.create a function = delete_tail(Node *&head, Node *&tail)
 2.deletenode = tail
 3.tail=tail->prev
 7.delete deletenode
 5.if tail == NULL head=Null return
 6.tmp->next =NULL
*/

void delete_tail(Node *&head, Node *&tail)
{
    Node* deletenode = tail;
    tail = tail->prev;
    delete deletenode;
    if(tail == NULL)
    {
        head =NULL;
        return;
    }
    tail->next=NULL;
}
//algorithom
/*
 1.create a function = delete_head(Node *&head, Node *&tail)
 2.deletenode = head
 3.head=head->next
 7.delete deletenode
 5.if nead == NULL tail=Null return
 6.head->prev =NULL
*/

void delete_head(Node *&head, Node *&tail)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}

void reverse(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val, j->val);
}

int main() {
    ROBOT_RIAD;
    Node *head = new Node(10);
    Node *tail = head;
    int pos;
    cin >> pos;

    if (pos >= size(head))
    {
        cout << "Invalid" << endl;
    }
    else if (pos == 0)
    {
        delete_head(head, tail);
    }
    else if (pos == size(head) - 1)
    {
        delete_tail(head, tail);
    }
    else
    {
        delete_at_position(head, pos);
    }

    print_reverse(tail);  
    return 0;
}
