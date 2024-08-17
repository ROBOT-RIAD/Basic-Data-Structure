#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int,int> pii;

int main() {
    ROBOT_RIAD;
    vector<int> v={1,2,3,4,5};

    // vector<int>::iterator it;
    // cout<<v[v.size()-1];
    // cout<<v.back();
    // cout<<v[0];
    // cout<<v.front();
    for(auto it =v.begin();it<v.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
