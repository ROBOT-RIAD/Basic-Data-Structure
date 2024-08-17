#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int,int> pii;

int main() {
    ROBOT_RIAD;
    vector<int>v={1,2,3,4,5};
    vector<int>v2={100,101,102,103};
    v.insert(v.begin()+2,v2.begin(),v2.end());
    for(int x: v)
    {
        cout<<x<<" ";
    }  
    return 0;
}
