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

    while(n>0)// O(log n)
    {
        int digit =n%10;
        cout<<digit;
        n/=10;
    }
    for(int i=0;i<n;i=i*2) // O(log N)
    {
        cout<<i<<endl;
    }
}
