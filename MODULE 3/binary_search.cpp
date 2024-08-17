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
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int x;
    cin>>x;
    int l=0,r=n=1;
    bool flag =false;
    while(l<=r)
    {
        int mid =(l+r)/2;
        if(a[mid] == x)
        {
            flag = true;
            break;
        }
        else if(x > a[mid])
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }

    cout<<l<<" "<<r<<endl;
    if(flag==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
