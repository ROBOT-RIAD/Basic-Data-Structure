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
    for(int i=0;i<n;i++)
    {
        int x=i;
        while(x>0)
        {
            int digit =x%10;
            cout<<digit<<" ";
            x/=10;
        }
        cout<<endl;
    }
}