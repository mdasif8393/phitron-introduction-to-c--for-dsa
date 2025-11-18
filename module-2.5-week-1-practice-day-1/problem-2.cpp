// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;

    int *b = new int[m];

    // Copy A to B
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    // Delete A as asked
    delete[] a;

    // Take rest of B input
    for (int i = n; i < m; i++)
    {
        cin >> b[i];
    }

    // Print B
    for (int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }

    delete[] b;

    return 0;
}
