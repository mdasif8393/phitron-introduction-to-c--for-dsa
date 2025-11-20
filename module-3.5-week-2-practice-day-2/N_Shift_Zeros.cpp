// https://codeforces.com/group/MWSDmqGsZm/contest/223205/submit
#include <bits/stdc++.h>
using namespace std;

void shift_zero(int a[], int n)
{

    int b[n];
    int index = 0;
    int zero = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            b[index] = a[i];
            index++;
        }
        else
        {
            zero++;
        }
    }

    for (int i = 0; i < zero; i++)
    {
        b[index] = 0;
        index++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
}

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    shift_zero(a, n);

    return 0;
}
