// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    int min = a, max = a;

    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }

    cout << min << " " << max;

    return 0;
}