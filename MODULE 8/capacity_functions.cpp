#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int,int> pii;

int main() {
    ROBOT_RIAD;
    list<int>mylist ={10,20,30};
    // cout<<mylist.max_size();
    // mylist.clear();
    mylist.resize(2);
    mylist.resize(5,100);
    for (int val : mylist)
    {
        cout << val << endl;
    }
    return 0;
}
