// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
#include <bits/stdc++.h>
using namespace std;

int *get_array(int n)
{
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    return a;
}

int main()
{
    int n;
    cin >> n;

    int *result = get_array(n);

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}