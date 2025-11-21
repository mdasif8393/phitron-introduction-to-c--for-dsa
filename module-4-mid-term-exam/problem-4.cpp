#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[1001];
    char section;
    double marks;
};

int main()
{
    int x;
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        Student a, b, c;

        cin >> a.id >> a.name >> a.section >> a.marks;
        cin >> b.id >> b.name >> b.section >> b.marks;
        cin >> c.id >> c.name >> c.section >> c.marks;

        Student *p;

        if (a.marks > b.marks && a.marks > c.marks)
        {
            p = &a;
        }
        else if (b.marks > a.marks && b.marks > c.marks)
        {
            p = &b;
        }
        else if (c.marks > a.marks && c.marks > b.marks)
        {
            p = &c;
        }
        else if (a.marks == b.marks)
        {
            if (a.id < b.id)
            {
                p = &a;
            }
            else if (b.id < a.id)
            {
                p = &b;
            }
        }
        else if (a.marks == c.marks)
        {
            if (a.id < c.id)
            {
                p = &a;
            }
            else if (c.id < a.id)
            {
                p = &c;
            }
        }
        else if (b.marks == c.marks)
        {
            if (b.id < c.id)
            {
                p = &b;
            }
            else if (c.id < b.id)
            {
                p = &c;
            }
        }

        cout << p->id << " " << p->name << " " << p->section << " " << p->marks << endl;
    }

    return 0;
}