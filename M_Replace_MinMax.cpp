// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
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
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        };
    }
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        };
    }

    int min_index, max_index;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == min)
        {
            min_index = i;
        };
        if (a[i] == max)
        {
            max_index = i;
        };
    }

    int temp = a[min_index];
    a[min_index] = a[max_index];
    a[max_index] = temp;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
