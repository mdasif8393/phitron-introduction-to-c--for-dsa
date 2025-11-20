// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

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
    int i = 0;
    int j = n - 1;

    int pal = 1;

    while (i < j)
    {
        if (a[i] != a[j])
        {
            pal = 0;
            break;
        }
        i++;
        j--;
    }

    if (pal == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
