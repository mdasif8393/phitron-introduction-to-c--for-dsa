// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mx = a[0];

    for (int i = 1; i < n; i++)
    {
        mx = max(a[i], mx);
    }

    cout << mx;

    return 0;
}