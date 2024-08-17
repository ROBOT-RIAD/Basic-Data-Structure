#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int,int> pii;

int main() {
    ROBOT_RIAD;
    list<int> my ={10,20,30,40,50,60,70,80};
    list<int>newmy={100,200,300};
    vector<int> v = {60, 70, 80};
    my.pop_back();
    my.pop_front();
    my.insert(next(my.begin(),3),100);
    my.erase(next(my.begin(),2));
    my.insert(next(my.begin(),3),v.begin(),v.end());
    replace(my.begin(), my.end(), 30, 100);

    auto it = find(my.begin(), my.end(), 60);
    if (it == my.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found";
    }   
    return 0;
}
