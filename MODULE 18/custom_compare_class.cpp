#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int,int> pii;

class Student{
    public:
    string name;
    int roll;
    int marks;
    Student(string name,int roll,int marks)
    {
        this->roll =roll;
        this->marks=marks;
        this->name =name;
    }
};
class cmp
{
    public:
    bool operator()(Student a,Student b)
    {
        if(a.marks > b.marks)
           return true;
        else if(a.marks < b.marks)
            return false;
        else
        {
            if(a.roll >b.roll)
                return true;
            else
            {
                return false;
            }
        }

    }
};

int main() {
    ROBOT_RIAD;
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        pq.pop();
    }
    return 0;
}
