#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int,int> pii;

int main() {
    ROBOT_RIAD;
    // vector<int> v; type 1
    // vector<int> v(5); type 2
    //vector<int> v(5,10); //type 3
    //vector<int> v2(5,100); //type 4
    //vector<int> v(v2); //type 4
    // int a[6]={1,2,3,4,5,6};
    // vector<int> v(a,a+6);

    vector<int> v={2,10,3};

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<v.size()<<endl;
    
    return 0;
}
