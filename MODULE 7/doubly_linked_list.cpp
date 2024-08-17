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

int main() {
    ROBOT_RIAD;
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = b;


    head->next=a;
    a->prev =head;
    a->next=b;
    b->prev=a;
    print_reverse(tail);
    return 0;
}
