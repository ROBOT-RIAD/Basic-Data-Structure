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
};

int main() {
    ROBOT_RIAD;
    Node a,b;
    //add value
    a.val =10;
    b.val =20;

    // counect value
    a.next =&b;
    b.next =NULL;

    cout<<a.val<<endl;
    cout<<b.val<<endl;
    
    cout<<(*a.next).val<<endl;
    cout<<a.next->val<<endl;   
    return 0;
}
