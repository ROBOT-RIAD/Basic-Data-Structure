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

void reverse(Node *&head, Node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}

int main() {
    ROBOT_RIAD;
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    Node* slow =head;
    Node* fast = head;
    bool flag= false;
    while(fast != NULL && fast->next !=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow)
        {
            flag- true;
            break;
        }
    }

    if (flag == true)
        cout << "Cycle Detected" << endl;
    else
        cout << "No Cycle" << endl;
   
    return 0;
}
