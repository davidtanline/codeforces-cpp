#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c = 0, i, t;
    cin >> i >> t;

    while (i < t)
    {
        if (t % 2 == 0)
        {
            t /= 2;
            c++;
        }
        else
        {
            t++;
            c++;
        }
    }
    cout << c + (i - t);
    return 0;
}