#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        int n;
        cin >> n;

        int sum;
        cin >> sum;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int is_matched = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (a[i] + a[j] + a[k] == sum)
                    {
                        is_matched = 1;
                    }
                }
            }
        }

        if (is_matched == 1)
        {
            cout << "YES" << endl;
        }
        else if (is_matched == 0)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}