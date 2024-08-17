#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int,int> pii;

int main() {
    ROBOT_RIAD;
    vector<int> x={10,20,30,40};
    x.pop_back();
    x.pop_back();
    for(int i=0;i<x.size();i++)
    {
        cout<<x[i]<<" ";
    }   
    return 0;
}
