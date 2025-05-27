#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    char name[50];
    int age;
    float gpa;

    //constructor
    Student(const char *name, int age, float gpa) {
        strcpy(this->name, name);
        this->age = age;
        this->gpa = gpa;
    }
};

Student* createStudent() {
    // Dynamically allocate memory for a Student object
    Student* student = new Student("John Doe", 20, 3.5);
    return student;
}

int main()
{
    // Student student1;
    // strcpy(student1.name, "John Doe");
    // student1.age = 20;
    // student1.gpa = 3.5;

    // cout << "Name: " << student1.name << endl;
    // cout << "Age: " << student1.age << endl;
    // cout << "GPA: " << student1.gpa << endl;
    
    // Using the constructor to initialize the object
    // Student student1("Jane Doe", 22, 3.8);
    // cout << "Name: " << student1.name << endl;
    // cout << "Age: " << student1.age << endl;
    // cout << "GPA: " << student1.gpa << endl;

    //dynamic object allocation
    Student* student1 = createStudent();
    cout << "Name: " << student1->name << endl;
    cout << "Age: " << student1->age << endl;
    cout << "GPA: " << student1->gpa << endl;

    // Free the dynamically allocated memory
    delete student1;

    return 0;
}