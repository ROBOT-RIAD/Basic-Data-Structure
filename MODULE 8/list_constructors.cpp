#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int,int> pii;

int main() {
    ROBOT_RIAD;
    list<int>myl;
    list<int>myl2={1,2,3,4,};
    int a[5] = {10, 20, 30, 40, 50};
    vector<int> v = {100, 200, 300};
    list<int> myList(10, 5);
    list<int> myList(myl2);
    list<int> myList(a, a + 5);
    list<int> myList(v.begin(), v.end());
    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    for (int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}
