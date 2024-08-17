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
        this->next =NULL;
    }
};

class myqueue
{
    public:
    Node* head =NULL;
    Node* tail =NULL;
    int sz=0;

    void push(int val)
    {
        sz++;
        Node* newnode = new Node(val);
        if(head == NULL)
        {
            head=newnode;
            tail = newnode;
            return;
        }
        tail->next =newnode;
        tail =tail->next;
    }
    void pop()
    {
        sz--;
        Node* deletenode = head;
        head =head->next;
        delete deletenode;
        if(head == NULL)
        {
            tail= NULL;
        }
    }

    int  front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};

int main() {
    ROBOT_RIAD;
    myqueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    
    return 0;
}
