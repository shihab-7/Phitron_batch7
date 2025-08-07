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
            if(a.marks == b.marks) return a.roll < b.roll;
            return a.marks > b.marks;
        }
};

int main()
{
    priority_queue<Student, vector<Student>,cmp> pq;

    for(int i=0;i<3;i++)
    {
        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
        Student st(name,roll,marks);
        pq.push(st);
    }
    

    return 0;
}