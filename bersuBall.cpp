#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b, g, bIndex = 0, gIndex = 0, t = 0, diff;

    cin >> b;
    int arrB[b];
    for (int i = 0; i < b; i++)
        cin >> arrB[i];

    cin >> g;
    int arrG[g];
    for (int i = 0; i < g; i++)
        cin >> arrG[i];

    sort(arrB, arrB + b);
    sort(arrG, arrG + g);

    while (bIndex < b && gIndex < g)
    {
        diff = abs(arrB[bIndex] - arrG[gIndex]);
        if (diff <= 1)
        {
            t++;
            bIndex++;
            gIndex++;
        }
        else if (arrB[bIndex] < arrG[gIndex])
            bIndex++;
        else
            gIndex++;
    }
    cout << t;
    return 0;
}