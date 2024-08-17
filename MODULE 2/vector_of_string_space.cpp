#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int,int> pii;

int main() {
    ROBOT_RIAD;
    int n;cin>>n;
    cin.ignore();
    vector<string>v(n);
    for(int i=0;i<n;i++)
    {
        getline(cin,v[i]);
    }
    for(string val:v)
    {
        cout<<val<<endl;
    }
    return 0;
}
