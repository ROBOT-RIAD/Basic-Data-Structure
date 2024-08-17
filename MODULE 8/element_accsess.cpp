#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int,int> pii;

int main() {
    ROBOT_RIAD;
    list<int> myList = {10, 20, 30, 40, 50};
    cout<<myList.front();
    cout<<myList.back();
    cout<<endl;
    cout<<*next(myList.begin(),3)<<endl;   
    return 0;
}
