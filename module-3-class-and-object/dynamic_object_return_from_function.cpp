#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student *fun()
{
    Student *rahim = new Student(1, 2, 3.5);
    return rahim;
}

int main()
{
    Student *p = fun();

    cout << (*p).roll << " " << p->cls << " " << p->gpa;

    return 0;
}
