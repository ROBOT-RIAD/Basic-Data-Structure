#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int,int> pii;

int main() {
    ROBOT_RIAD;
    vector<int>v2={1,2,2,4,3,5,1,2,4,5,3,2};
    replace(v2.begin(),v2.end(),2,100);
    for(int x:v2)
    {
        cout<<x<<" ";
    }


    vector<int>v={1,2,2,4,3,5,1,2,4,5,3,2};
    auto it = find(v.begin(),v.end(),3);
    cout<<endl;
    if(it == v.end()) cout<<"Not found";
    else cout<<"Found";  
    return 0;
}
