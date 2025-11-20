// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    char c[10];
    cin >> c;

    int b;
    cin >> b;

    int comp = int(*c);

    int ans;

    if (comp == 61)
    {
        a == b ? ans = 1 : ans = 0;
    }
    else if (comp == 60)
    {
        a < b ? ans = 1 : ans = 0;
    }
    else if (comp == 62)
    {
        a > b ? ans = 1 : ans = 0;
    }

    if (ans == 1)
    {
        cout << "Right";
    }
    else
    {
        cout << "Wrong";
    }

    return 0;
}
