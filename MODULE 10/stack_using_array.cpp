#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int,int> pii;

class mystack{
    public:
      vector<int>v;
      void push(int val)
      {
        v.push_back(val);
      }
      void pop()
      {
        v.pop_back();
      }
      int top()
      {
        return v.back();
      }

      int size()
      {
        return v.size();
      }

      bool empty()
      {
        if(v.size()==0)
        {
            return true;
        }
        else{
            return false;
        }
      }
};

int main() {
    ROBOT_RIAD;
    mystack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (st.empty() == false)
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}
