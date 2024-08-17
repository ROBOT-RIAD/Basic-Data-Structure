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

int main() {
    ROBOT_RIAD;

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b= new Node(30);
    Node* c = new Node(40);


    head->next =a;
    a->next=b;
    b->next=c;

    Node* tmp = head;

    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
      
    return 0;
}
