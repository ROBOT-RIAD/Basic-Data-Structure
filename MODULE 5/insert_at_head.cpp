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
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

// algorithom
/*
 1.create a function = insert_at_tail(Node*& head,int val) // Node*& head becuase of head changes
 2.create a new dinamic node name newnode
 3.if head == NUll head=newnode and return
 4. tmp = head
 5. while() colect last node tmp->next != NUll
 6. tmp=tmp->next
 7. tmp = newnode
*/
void insert_at_tail(Node *&head, int val)
{
    Node* newnode =new Node(val);
    if(head == NULL)
    {
        head =newnode;
        return;
    }
    Node* tmp = head;
    while(tmp ->next != NULL)
    {
        tmp=tmp->next;
    }
    tmp->next = newnode;
}

// algorithom
/*
 1.create a fiunction =insert_at_position(Node *head, int pos, int v)
 2.create a dinamic newnode
 3.crete a dinamic tem
 4.for i=1<=pos-1 tmp->next
 5.newnode-next = tmp->next
 6.tmo-next =newnode
*/
void insert_at_position(Node *&head, int pos, int val)
{
    Node* newnode =new Node(val);
    Node* tmp =head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next = newnode;
}

// algorithom
/*
 1. create a function = print_linked_list(Node* head)
 2. create dinamic tmp and tmp=head
 3. while() tmp !=Null
 4. cout tmp->val
 5. tmp= tmp-> next
 */

void print_linked_list(Node *head)
{
    cout << "All value: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
// algorithom
/*
 1.create a function = insert_at_head(Node*& head,int val)
 2.create dinamic newnode
 3.newnode->next = head
 4.head=newnode
*/
void insert_at_head(Node *&head, int val)
{
    Node* newnode = new Node(val);
    newnode->next =head;
    head=newnode;
}


int main() {
    ROBOT_RIAD;
    Node *head = NULL;
    
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert at any Position" << endl;
        cout << "Option 4: Insert at Head" << endl;
        cout << "Option 5: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int pos, v;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> v;
            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_at_position(head, pos, v);
            }
        }
        else if (op == 4)
        {
            int v;
            cout << "Enter value: ";
            cin >> v;
            insert_at_head(head, v);
        }
    }
    return 0;
}
