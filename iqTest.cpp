#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, val, oddIndex, evenIndex, even = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        if (val % 2 == 0)
        {
            even++;
            evenIndex = i + 1;
        }
        else
        {
            even--;
            oddIndex = i + 1;
        }
    }
    cout << (even > 0 ? oddIndex : evenIndex);
    return 0;
}