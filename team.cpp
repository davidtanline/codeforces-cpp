#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, r, count, total = 0;
    cin >> n;
    while (n--)
    {
        count = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> r;
            if (r == 1)
            {
                count++;
            }
        }
        if (count >= 2)
        {
            total++;
        }
    }
    cout << total;
    return 0;
}