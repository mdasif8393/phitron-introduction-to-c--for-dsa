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

int main()
{
    Student rahim(11, 5, 3.7);
    Student *karim = new Student(10, 5, 4.6);
    Student *asif = new Student(11, 23, 43);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << (*karim).roll << " " << karim->cls << " " << karim->gpa << endl;
    cout << asif->roll << " " << asif->cls << " " << asif->gpa << endl;

    return 0;
}
