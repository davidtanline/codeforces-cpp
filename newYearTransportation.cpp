#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, s = 1, i = 1, val;
    cin >> n >> t;
    while (s < t)
    {
        cin >> val;
        if (i == s)
        {
            s += val;
        }
        i++;
    }
    cout << (s == t ? "YES" : "NO");
    return 0;
}