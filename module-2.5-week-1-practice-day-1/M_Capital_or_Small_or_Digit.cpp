// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a;
    cin >> a;

    int x = a;

    if (x >= 65 && x <= 90)
    {
        cout << "ALPHA\nIS CAPITAL";
    }
    else if (x >= 97 && x <= 122)
    {
        cout << "ALPHA\nIS SMALL";
    }
    else if (x >= 48 && x <= 57)
    {
        cout << "IS DIGIT";
    }

    return 0;
}