
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int section;
    int math_marks;
    int cls;

    Student(string name, int roll, int section, int math_marks, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    Student a("Asif Zaman", 12, 1, 76, 2);
    Student b("Abid Zaman", 11, 3, 90, 3);
    Student c("Zarif Zaman", 14, 4, 54, 5);

    if ((a.math_marks > b.math_marks) && (a.math_marks > c.math_marks))
    {
        cout << a.name;
    }
    else if ((b.math_marks > a.math_marks) && (b.math_marks > c.math_marks))
    {
        cout << b.name;
    }
    else if ((c.math_marks > b.math_marks) && (c.math_marks > a.math_marks))
    {
        cout << c.name;
    }

    return 0;
}
