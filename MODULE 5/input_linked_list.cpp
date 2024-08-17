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
        this->val =val;
        this->next =NULL;
    }
};

//algorithom 
/*
 1.create a function = insert_at_tail(Node*& head,int val) // Node*& head becuase of head changes
 2.create a new dinamic node name newnode
 3.if head == NUll head=newnode and return
 4. tmp = head
 5. while() colect last node tmp->next != NUll
 6. tmp=tmp->next
 7. tmp = newnode
*/


void insert_at_tail(Node*& head,int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head =newnode;
        return;
    }
    Node* tmp = head;
    while (tmp->next !=NULL)
    {
        tmp = tmp->next;
    }
    tmp->next=newnode;
}

//algorithom
/*
 1. create a function = print_linked_list(Node* head)
 2. create dinamic tmp and tmp=head
 3. while() tmp !=Null
 4. cout tmp->val
 5. tmp= tmp-> next
 */
void print_linked_list(Node* head)
{
    cout<<"All value: ";
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}

int main() {
    ROBOT_RIAD;
    Node* head = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }
    print_linked_list(head);
    return 0;
}
