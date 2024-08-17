#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int,int> pii;

int main() {
    ROBOT_RIAD;
    vector<int>v={1,2,3,4,5,6};
    v.erase(v.begin()+3);
    v.erase(v.begin()+1,v.begin()+4);
    //v.erase(v.begin()+1,v.end()-1);
    for(int x:v)
    {
        cout<<x<<" ";
    }

    return 0;
}
