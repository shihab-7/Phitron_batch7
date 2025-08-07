#include<bits/stdc++.h>
using namespace std;
class Student{

    public:
        string name;
        int roll;
        int marks;
    Student(string name,int roll,int marks)
    {
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }
};

class cmp
{
    public:
        bool operator()(Student a, Student b)
        {
            if(a.marks == b.marks) return a.roll > b.roll;
            else return a.marks < b.marks;
        }
};
int main()
{
    priority_queue<Student,vector<Student>,cmp> pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
        Student st(name,roll,marks);
        pq.push(st);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int op;
        cin>>op;
        if(op==0)
        {
            string name;
            int roll,marks;
            cin>>name>>roll>>marks;
            Student s(name,roll,marks);
            pq.push(s);

            if(!pq.empty()) cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            else cout<<"Empty"<<endl;
        }
        else if(op==1)
        {
            if(!pq.empty()) cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            else cout<<"Empty"<<endl;
        }
        else if(op==2)
        {
            if(!pq.empty()) pq.pop();
            if(!pq.empty()) cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            else cout<<"Empty"<<endl;
        }
    }
    return 0;
}