#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int,int> pii;

int main() {
    ROBOT_RIAD;
    ll n,q;
    cin>>n>>q;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll pre[n];
    pre[0]=a[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=a[i]+pre[i-1];
    }

    while(q--)
    {
        ll l,r;cin>>l>>r;
        ll sum=0;
        if(l==0)
        sum=pre[r];
        else
        sum =pre[r]-pre[l=1];
        cout<<sum<<endl;
    }
    return 0;
}
