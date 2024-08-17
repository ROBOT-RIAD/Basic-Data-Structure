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
        this->next=NULL;
        this->prev =NULL;
    }
};


class mystack{
    public:
    Node* head= NULL;
    Node* tail=NULL;
    int sz=0;

    void push(int val)
    {
        sz++;
        Node* newnode = new Node(val);
        if(head ==NULL)
        {
            head= newnode;
            tail =newnode;
            return;
        }
        newnode->prev = tail;
        tail->next = newnode;
        tail = tail->next;
    }

    void pop()
    {
        sz--;
        Node* deletenode = tail;
        tail = tail->prev;
        if(tail == NULL)
        {
            head = NULL;
        }
        else{
            tail->next = NULL;
        }
        delete deletenode;
    }

    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }

    bool empty()
    {
        if(sz==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main() {
    ROBOT_RIAD;
    mystack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    
    
    return 0;
}