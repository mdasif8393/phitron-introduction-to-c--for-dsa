// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    char sign1[10];
    cin >> sign1;

    int b;
    cin >> b;

    char sign2[10];
    cin >> sign2;

    int c;
    cin >> c;

    int comp1 = int(*sign1);

    int result;

    if (comp1 == 43)
    {
        result = a + b;
    }
    else if (comp1 == 45)
    {
        result = a - b;
    }
    else if (comp1 == 42)
    {
        result = a * b;
    }

    if (c == result)
    {
        cout << "Yes";
    }
    else
    {
        cout << result;
    }

    return 0;
}
