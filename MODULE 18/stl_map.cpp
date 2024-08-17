#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int,int> pii;

int main() {
    ROBOT_RIAD;
    map<string, int> mp;
    mp["Sakib al hasn"] = 79; // O(logN)
    mp.insert({"akib", 100});
    mp.insert({"akib", 150});
    mp["tamim"] = 79;

    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl; // O(logN)
    // }

    cout << mp.count("akib") << endl;
    return 0;
}
