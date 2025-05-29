#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        int id;
        string name;
        char section;
        int marks;    
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Student first;
        for(int i=1;i<=3;i++)
        {
            Student tmp;
            cin>>tmp.id>>tmp.name>>tmp.section>>tmp.marks;
            if(i==1)
            {
                first=tmp;
            }
            else
            {
                if(tmp.marks>first.marks)
                {
                    first=tmp;
                }
                else if(tmp.marks==first.marks)
                {
                    if(tmp.id<first.id)
                    {
                        first=tmp;
                    }
                }
            }
        }
        cout<<first.id<<" "<<first.name<<" "<<first.section<<" "<<first.marks<<endl;
    }
    return 0;
}